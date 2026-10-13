#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <iostream>

class Book {
public:
    Book();
    Book(const std::string& titre, const std::string& auteur,
         const std::string& isbn, int annee);
    std::string getTitre() const;
    std::string getAuteur() const;
    std::string getISBN() const;
    int getAnnee() const;
    void afficher() const;
private:
    std::string m_titre;
    std::string m_auteur;
    std::string m_isbn;
    int m_annee;
};

#endif // BOOK_HPP

#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.hpp"
#include <vector>

class Library {
public:
    void ajouterLivre(const Book& livre);
    const Book* trouverParISBN(const std::string& isbn) const;
    void listerLivres() const;
private:
    std::vector<Book> m_livres;
};

#endif // LIBRARY_HPP