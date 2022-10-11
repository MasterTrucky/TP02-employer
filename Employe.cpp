#include <iostream>
#include "Employe.h"


using namespace std;

void Employe::init_Employe(int i, double taux, double h)
{
    ID = i;
    Taux_r = taux;
    max_H = h;
}

/*void Employe::init_liste(Employe &l)
{
    l.nb=0;
}*/
/* Permet d'afficher le menu*/
void Employe::afficher_menu()
{
    int choix=0;
    int i;
    int empl[100];
    bool var = false;
    Employe emp;
    {   
        while (var)
        {
        cout<<"1. Ajouter un employer \n";
        cout<<"2. Modifier les donnees d'un employer \n";
        cout<<"3. Afficher les donnees d'un employer \n";
        cout<<"4. Afficher les donnees des employes enregistres \n";
        cout<<"5. Quitter le menu \n";
        cout<<"Choix: "<<endl;
        cin >> choix;
    }
    switch (choix)
    {
    case 1:
        ajouter(emp);

        break;
    case 2:
        break;
    case 3:
        afficher_donnees(emp);
        break;
    case 4:
        break;
    case 5:
        var = true;
        break;
    }
    return var;
    }
}
/* Permet d'ajouter un employer*/
int Employe::ajouter(Employe &emp)
    {   
        cout<<"Entrer un identifiant pour l'employer : ";
        cin >> ID;
        cout<<"Entrer son remuneration : ";
        cin >> Taux_r;
        cout<<"Entrer son temps de travail : ";
        cin >> max_H;
        cout<<"\n";
    return 0;
    }
/* Permet d'afficher les données d'un employer*/
void Employe::afficher_donnees(Employe emp)
    {
        cout<<"L'identifiant de l'employer ID : "<<emp.ID<<endl;
        cout<<"Son remuneration est de : "<<emp.Taux_r<<endl;
        cout<<"Son temps de travail est de : "<<emp.max_H<<endl;
    }

/*void Employe::afficher_donnees_all(Employe emp)
    {
        int i;
        for(i=0; i<1; i++)
        {
            afficher_donnees(emp.ID[&emp]);
        }
    }
*/