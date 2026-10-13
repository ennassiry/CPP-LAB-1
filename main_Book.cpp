#include <iostream>
#include "Book.hpp"

int main() {
    std::cout << "=== TEST 1 : Test du constructeur par defaut == \n";
    Book livreParDefaut;
    livreParDefaut.afficher(); // Doit afficher "Inconnu", annee 0, etc.
    std::cout << "\n";

    std::cout << "=== TEST 2 : Test du constructeur avec parametres == \n";
    Book livre1("Les Miserables", "Victor Hugo", "978-2070409181", 1862);
    livre1.afficher();
    std::cout << "\n";

    std::cout << "=== TEST 3 : Test unitaire des Getters ==-\n";
    std::cout << "Titre recupere : " << livre1.getTitre() << "\n";
    std::cout << "Auteur recupere : " << livre1.getAuteur() << "\n";
    std::cout << "ISBN recupere : " << livre1.getISBN() << "\n";
    std::cout << "Annee recuperee : " << livre1.getAnnee() << "\n";

    return 0;
}