#include <iostream>

using namespace std;

int nbreO = 1000;
int nbreN = 500;
char rep;
int repp;

void affichageParametre(){
    cout<<"Taille                               :   "<<WINDOW_WIDTH<<"X"<<WINDOW_HEIGHT<<endl;
    cout<<"Nombre d'obstacle                    :   "<<nbreO<<endl;
    cout<<"Nombre de source de nourritures      :   "<<nbreN<<endl;
    cout<<"Taux d'évaporation des phéromones    :   "<<PHEROMONE_POWER<<endl;
    cout<<"Nombre de fourmis                    :   "<<START_ANTS<<endl;
}
void affcicheConfigParametre(){
    cout<<"\n\n**************************************************************************************"<<endl;
    cout<<"*  1. Taille                                  2. Taux d'évaporation des phéromones   *"<<endl;
    cout<<"*                                                                                    *"<<endl;
    cout<<"*  3. Nombre de source de nourritures         4. Nombre d'obstacle                   *"<<endl;
    cout<<"*                                                                                    *"<<endl;
    cout<<"*  5. Nombre de fourmis                                                              *"<<endl;
    cout<<"**************************************************************************************"<<endl;
}
void initialisation(){
    WINDOW_WIDTH = 1400;
    WINDOW_HEIGHT = 900;
    START_ANTS = 1000;
    PHEROMONE_POWER = 30;
    cout<<"Initialisation et modification des parametres de l'environnement"<<endl;
    cout<<"\nValeur par defaut\n"<<endl;
    affichageParametre();
    cout<<"\nVoulez vous modifier certains parametres ? O/N : ";
    cin>>rep;
    if(rep == 'O' || rep == 'o'){
        while(rep == 'O' || rep == 'o'){
            affcicheConfigParametre();
            std::cout<<"Veuillez choisir le parametre à modifier : ";
            cin>>repp;
            switch(repp){
                case 1 :
                    cout<<"\nVeuillez choisir la taille de la longueur : ";
                    cin>>WINDOW_WIDTH;
                    cout<<"\nVeuillez choisir la taille de la largeur : ";
                    cin>>WINDOW_HEIGHT;
                    break;
                case 4 :
                    cout<<"\nVeuillez choisir le nombre d'obstacle : ";
                    cin>>nbreO;
                    break;
                case 3 :
                    cout<<"\nVeuillez choisir le nombre de source de nourritures : ";
                    cin>>nbreN;
                    break;
                case 5 :
                    cout<<"\nVeuillez choisir le nombre de fourmis : ";
                    cin>>START_ANTS;
                    break;
                case 2 :
                    cout<<"\nVeuillez choisir le taux d'évaporation des phéromones  : ";
                    cin>>PHEROMONE_POWER;
            }
            cout<<"\nVoulez vous continuer ? O/N : ";
            cin>>rep;
        }
    }
    cout<<"\n\nParametre final de l'environnement\n"<<endl;
    affichageParametre();
}

