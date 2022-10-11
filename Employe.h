#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>

using namespace std;

class Employe
{
private:
    int ID;
    double Taux_r;
    double max_H;
    int choix;
public:
    int nb;
    void init_Employe(int, double, double);
    /*void init_liste(Employe &l);*/
    int ajouter(Employe &emp);
    void afficher_donnees(Employe emp);
    /*void afficher_donnees_all(Employe l);*/
    void afficher_menu();
    int modifier();
};
#endif