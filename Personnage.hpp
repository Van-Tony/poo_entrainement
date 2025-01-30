#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include "Arme.hpp"

class Personnage
{
public:
    //constructeur
    Personnage();

    //constructeur surchargé
    Personnage(string nomPersonnage);
    //méthodes
    void attaquer(Personnage &cible);

    void recevoirDegats(int nbDegats);

    boirePotionDeVie(int quantitePotion);

    changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);

    bool estVivant();

    //attributs (variables membres)
private:
    int m_ptDeVie;
    int m_ptDeMana;
    std::string m_nom;
};

#endif // PERSONNAGE_HPP
