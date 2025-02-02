// fichier Arme.hpp

#ifndef ARME_HPP
#define ARME_HPP
#include <string>
#include <iostream>
class Arme
{
    public:
    //constructeur
    Arme();
    //constructeur de copie
    Arme(std::string nomArme, int degats);
    void changer(std::string nomArme, int degats);
    void afficher() const;

    private:
    std::string m_nom;
    int m_degats;
};

#endif // ARME_HPP
