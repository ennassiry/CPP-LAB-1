
#include <iostream>
#include <string>

class CompteBancaire {
private:
    std::string titulaire;
    double solde;

public:  
std::string getTitulaire() {
    return titulaire;
}  
void definirTitulaire(std::string nom) {
    titulaire = nom;
}

void depot(double montant) {
    if (montant > 0) {
        solde += montant;
        std::cout << "Solde apres depot: "<<solde<<"\n" ;
    } else {
        std::cout << "Montant invalide";
    }
}

void retrait(double montant) {
    if (montant <= 0) {
        std::cout << "Montant invalide " ;
    } else if (montant <= solde) {
        solde -= montant;
        std::cout << "Solde apres retrait : "<<solde<<"\n" ;
    } else {
        std::cout << "Solde insuffisant " ;
    }
}

void afficher() {
    std::cout << "Titulaire : " << titulaire<<"\n" ;
    std::cout << "Solde : " << solde << " DH"<<"\n" ;
}

};



int main() {
    CompteBancaire compte1;

    compte1.definirTitulaire("Mohamme EN-NASSIRY");
     std::cout <<"titulaire "<<compte1.getTitulaire()<<"\n";
    compte1.depot(100);
    compte1.retrait(300);

    //compte1.afficher();

    return 0;
}