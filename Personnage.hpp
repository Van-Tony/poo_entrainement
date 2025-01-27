#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>

class Personnage
{
public:
    //constructeur
    Personnage(std::string nomArme, int degatsArme, int ptDeVie);
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
    std::string m_nomArme;
    int m_degatsArme;
};

#endif // PERSONNAGE_HPP
