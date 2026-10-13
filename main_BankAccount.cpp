#include <iostream>
#include "BankAccount.hpp"

int main() {
    std::cout << "=== TEST 1 : Constructeur par defaut ==-\n";
    BankAccount compte1;
    compte1.afficher(); // Doit afficher Compte N: NA | Solde: 0
    std::cout << "\n";

    std::cout << "=== TEST 2 : Constructeur avec parametres ==-\n";
    BankAccount compte2("ACC-12345", 1000.0);
    compte2.afficher(); // Doit afficher Solde: 1000 DH
    std::cout << "\n";

    std::cout << "=== TEST 3 : Tests de Depot ===\n";
    compte2.deposer(500.0);   // Dépôt valide (+500)
    compte2.deposer(-50.0);   // Dépôt invalide (doit afficher une erreur)
    std::cout << "\n";

    std::cout << "=== TEST 4 : Tests de Retrait ===\n";
    compte2.retirer(200.0);   // Retrait valide (-200)
    compte2.retirer(5000.0);  // Retrait invalide : fonds insuffisants
    compte2.retirer(-10.0);   // Retrait invalide : montant négatif
    std::cout << "\n";

    std::cout << "=== TEST 5 : Utilisation des Getters ===\n";
    std::cout << "Numero du compte : " << compte2.getNumero() << "\n";
    std::cout << "Solde actuel verifie : " << compte2.getSolde() << " DH\n";
    std::cout << "\n";

    std::cout << "=== ETAT FINAL DU COMPTE ===\n";
    compte2.afficher();

    return 0;
}