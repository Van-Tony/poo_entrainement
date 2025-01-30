#include <string>

    // constructeur
    Personnage::Personnage() : m_nomArme(nomArme),m_degatsArme(degatsArme), m_nbDeMana(100), m_ptDeVie(ptDeVie)
        {

        }
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


