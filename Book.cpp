#include "Book.hpp"
#include <iostream>
#include <string>

// Constructeur par défaut : initialise un livre avec des valeurs par défaut (valeurs "vides" ou "inconnues")
Book::Book() : m_titre("Inconnu"), m_auteur("Inconnu"), m_isbn(""), m_annee(0) {}

// Constructeur avec paramètres : permet d'initialiser un livre avec de vraies informations dès sa création
Book::Book(const std::string& titre, const std::string& auteur,
           const std::string& isbn, int annee)
    : m_titre(titre), m_auteur(auteur), m_isbn(isbn), m_annee(annee) {}

// --- Getters (méthodes d'accès en lecture) ---
// Ces méthodes permettent de récupérer les attributs privés de l'extérieur de la classe

std::string Book::getTitre() const { 
    return m_titre; 
}

std::string Book::getAuteur() const { 
    return m_auteur; 
}

std::string Book::getISBN() const { 
    return m_isbn; 
}

int Book::getAnnee() const { 
    return m_annee; 
}

// Méthode d'affichage : affiche toutes les informations d'un livre proprement dans la console
void Book::afficher() const {
    std::cout << "Titre : " << m_titre << " | Auteur : " << m_auteur
              << " | ISBN : " << m_isbn << " | Annee : " << m_annee << '\n';
}