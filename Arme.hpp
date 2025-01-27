#ifndef ARME_HPP
#define ARME_HPP

class Arme
{
    public:
    Arme();
    Arme(std::string nomArme, int, degats);
    void changer(std::string nomArme, int degats);
    void afficher() const;
};

#endif // ARME_HPP
