#include <iostream>
#include <string>
class Livre{
private:
    std::string titre;
    std::string auteur;
    int anneePublication ;
public:
    void definirLivre(std::string t, std::string a, int annee){
        titre = t;
        auteur = a;
        anneePublication = annee ;
    }
    void afficher(){
        std::cout << "titre: "<<  titre<<" auteur: "<<auteur<<" annne de publication: "<<anneePublication<<"\n";
    }


    int getAnneePublication(){
        return anneePublication;
    }

};

int main(void){
   Livre livre1,livre2;
   livre1.definirLivre("Le C++ Moderne","Bjarne Stroustrup",2013);
   livre1.afficher();

   livre2.definirLivre("Programmation Orientee Objet","Jean Dupon",2026);
   livre2.afficher();
}