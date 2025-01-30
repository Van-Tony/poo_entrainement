// fichier Personnage.hpp
#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include "Arme.hpp"
#include <iostream>
class Personnage
{
public:
    //constructeur
    Personnage();

    //constructeur surchargé
    Personnage(std::string nomPersonnage);

    //constructeur de copie
    Personnage(Personnage &cible);
    //méthodes
    void attaquer(Personnage &cible);

    void recevoirDegats(int nbDegats);

    void boirePotionDeVie(int quantitePotion);

    bool estVivant();
    void afficherEtat() const;
    //attributs (variables membres)
private:
    int m_ptDeVie;
    int m_ptDeMana;
    std::string m_nom;
    int m_nbDegats;
    Arme m_arme;
};

#endif // PERSONNAGE_HPP
