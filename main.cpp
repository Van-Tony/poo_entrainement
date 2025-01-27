#include <iostream>
#include "Personnage.hpp"

int main()
{
    Personnage tony("clavier", 200), lola(tony);
    tony.attaquer(lola);
    lola.boirePotionDeVie(20);
    tony.attaquer(lola);
    lola.attaquer(tony);

    lola.changerArme("hache",40);
    lola.attaquer(tony);
    return 0;
}
