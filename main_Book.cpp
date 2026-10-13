#include <iostream>
#include "Library.hpp"

int main() {
    std::cout << "=== INITIALISATION DE LA BIBLIOTHEQUE ===\n";
    Library maBiblio;
    maBiblio.listerLivres(); // Doit afficher que le catalogue est vide
    std::cout << "\n";

    std::cout << "=== TEST 1 : Ajout de livres valides ===\n";
    Book livre1("Programmation en C++", "Bjarne Stroustrup", "978-2100729753", 2015);
    Book livre2("Algorithmique", "Thomas Cormen", "978-2100545262", 2013);

    maBiblio.ajouterLivre(livre1);
    maBiblio.ajouterLivre(livre2);
    std::cout << "\n";

    std::cout << "=== TEST 2 : Test anti-doublon par ISBN ===\n";
    // Même ISBN que le livre1, l'ajout doit être refusé
    Book livreDoublon("Autre version du C++", "Auteur Inconnu", "978-2100729753", 2020);
    maBiblio.ajouterLivre(livreDoublon);
    std::cout << "\n";

    std::cout << "=== TEST 3 : Affichage de tout le catalogue ===\n";
    maBiblio.listerLivres();
    std::cout << "\n";

    std::cout << "=== TEST 4 : Recherche par ISBN (Succes) ===\n";
    std::string isbnRecherche = "978-2100545262";
    const Book* trouve = maBiblio.trouverParISBN(isbnRecherche);
    if (trouve != nullptr) {
        std::cout << "[Succes] Livre trouve !\n";
        trouve->afficher();
    } else {
        std::cout << "[Echec] Livre non trouve.\n";
    }
    std::cout << "\n";

    std::cout << "=== TEST 5 : Recherche par ISBN (Echec) ===\n";
    std::string isbnInconnu = "000-0000000000";
    const Book* introuvable = maBiblio.trouverParISBN(isbnInconnu);
    if (introuvable == nullptr) {
        std::cout << "[Info] Test reussi : aucun livre ne correspond a l'ISBN " << isbnInconnu << " (c'est normal).\n";
    }

    return 0;
}
