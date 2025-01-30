// fichier Arme.cpp

#include "Arme.hpp"
#include <iostream>
#include <string>

using namespace std;

// implémentation du constructeur par défaut de la classe Arme
Arme::Arme() : m_nom("Epee en bois"), m_degats(10)
{

}

// implémentation du constructeur de copie de la classe Arme
Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats)
{

}

// méthode qui affiche quelle arme est utilisée et son nombre de dégats
void Arme::afficher() const
{
    cout << "Arme : " << m_nom << " Degats : " << m_degats << endl;
}

void Arme::changer(std::string nomArme, int degats)
{
    m_nom = nomArme;
    m_degats = degats;
}
