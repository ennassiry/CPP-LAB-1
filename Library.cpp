#include "Library.hpp"
#include <iostream>

void Library::ajouterLivre(const Book& livre) {
    // Vérifier l'unicité de l'ISBN avant d'ajouter
    if (trouverParISBN(livre.getISBN()) != nullptr) {
        std::cerr << "[Erreur] Un livre avec le meme ISBN existe deja.\n";
        return;
    }
    m_livres.push_back(livre);
    std::cout << "[Info] Livre ajoute au catalogue.\n";
}

const Book* Library::trouverParISBN(const std::string& isbn) const {
    for (const auto& livre : m_livres) {
        if (livre.getISBN() == isbn) {
            return &livre; // Retour d'un pointeur constant vers le livre trouvé
        }
    }
    return nullptr; // Aucun livre trouvé
}

void Library::listerLivres() const {
    if (m_livres.empty()) {
        std::cout << "Le catalogue est vide.\n";
        return;
    }
    std::cout << "--- Catalogue des Livres ---\n";
    for (const auto& livre : m_livres) {
        livre.afficher();
    }
    std::cout << "---------------------------\n";
}