#include "Arme.hpp"
#include <string>

using namespace std;

// implémentation du constructeur par défaut de la classe Arme
Arme::Arme() : m_nomArme("Epee en bois"), int m_degats(10)
{

}

// implémentation du constructeur de copie de la classe Arme
Arme::Arme(string nomArme, int degats) : m_nomArme(nomArme), m_degats(degats)
{

}
