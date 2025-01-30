// fichier Personnage.cpp

#include <string>
#include "Personnage.hpp"

    // constructeur
    Personnage::Personnage() : m_nom("Tony"), m_ptDeMana(100), m_ptDeVie(100), m_nbDegats(10)
    {

    }
    // constructeur de copie
    Personnage::Personnage(Personnage &cible) : m_nom(cible.m_nom), m_ptDeMana(100), m_ptDeVie(100), m_nbDegats(10)
    {

    }
    //constructeur surchargé
    Personnage::Personnage(std::string nomPersonnage) : m_nom(nomPersonnage), m_ptDeMana(100), m_ptDeVie(100), m_nbDegats(10)
    {

    }

    //méthodes
     void Personnage::afficherEtat() const
    {
        std::cout << "Nom du personnage : " << m_nom << std::endl;
        std::cout << "Points de mana : " << m_ptDeMana << std::endl;
        std::cout << "Points de vie : " << m_ptDeVie << std::endl;
        m_arme.afficher();
    }

    void Personnage::attaquer(Personnage &cible)
    {
        cible.recevoirDegats(m_nbDegats);
    }

    void Personnage::recevoirDegats(int nbDegats)
    {
        m_ptDeVie -= nbDegats;
        if(m_ptDeVie < 0)
        {
            m_ptDeVie = 0;
        }
    }

    void Personnage::boirePotionDeVie(int quantitePotion)
    {
        m_ptDeVie += quantitePotion;
    }



    bool Personnage::estVivant()
    {
        return m_ptDeVie > 0;
    }


