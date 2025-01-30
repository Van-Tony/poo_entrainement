#include <string>
#include "Personnage.hpp"

    // constructeur
    Personnage::Personnage() : m_nom("Tony"), m_ptDeMana(100), m_ptDeVie(100)
        {

        }

    //constructeur surchargé
    Personnage::Personnage(std::string nomPersonnage) : m_nom(nomPersonnage) m_ptDeMana(100), m_ptDeVie(100)

    //méthodes
    void attaquer(Personnage &cible)
    {
        cible.recevoirDegats(nbDegats);
    }

    void recevoirDegats(int nbDegats)
    {
        m_ptDeVie -= nbDegats;
        if(m_ptDeVie < 0)
        {
            m_ptDeVie = 0;
        }
    }

    void boirePotionDeVie(int quantitePotion)
    {
        m_ptDeVie += 20;
    }

    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
    {
        m_nomArme = nomNouvelleArme;
        m_degatsArme = degatsNouvelleArme;
    }

    bool estVivant()
    {
        return m_ptDeVie > 0;
    }


