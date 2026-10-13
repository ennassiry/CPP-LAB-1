#include "BankAccount.hpp"
#include <iostream>
#include <string>

BankAccount::BankAccount() : m_numero("NA"), m_solde(0.0) {}

BankAccount::BankAccount(const std::string& numero, double soldeInitial)
    : m_numero(numero), m_solde(soldeInitial) {}

void BankAccount::deposer(double montant) {
    if (montant <= 0) {
        std::cerr << "[Erreur] Le montant a daposer doit etre positif.\n";
        return;
    }
    m_solde += montant;
    std::cout << "[Info] Depot de " << montant << " effectue. Nouveau solde : " << m_solde << "DH \n";
}

bool BankAccount::retirer(double montant) {
    if (montant <= 0) {
        std::cerr << "[Erreur] Le montant a retirer doit etre positif.\n";
        return false;
    }
    if (montant > m_solde) {
        std::cerr << "[Erreur] Fonds insuffisants. Solde actuel : " << m_solde << " \n";
        return false;
    }
    m_solde -= montant;
    std::cout << "[Info] Retrait de " << montant << "  effectue. Nouveau solde : " << m_solde << " DH\n";
    return true;
}

void BankAccount::afficher() const {
    std::cout << "Compte N: " << m_numero << " | Solde: " << m_solde << " \n";
}

std::string BankAccount::getNumero() const { 
    return m_numero; 
}

double BankAccount::getSolde() const { 
    return m_solde; 
}