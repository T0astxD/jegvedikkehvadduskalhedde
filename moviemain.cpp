#include <iostream>
#include <stdlib.h>
#include "Movie.cpp"

using namespace std;
int ValgAfMenu;
int ValgAfFilm;

string placeholderfilmtitel;
int placeholderfilmlængde;
int placeholderudgivelsesdato;
int placeholderrating;

int main() {

    Movie* addmovie;

    string addfilmtitel=" ";
    string addfilmlængde;
    string addudgivelsesdato;
    double addrating;

    //Grease
    string GreaseFilmtitel = "Grease";
    string GreaseUdgivelsesdato = "15/9/1978";
    string GreaseFilmlængde = "1t 50m";
    double GreaseRating = 3.6;

    //HSC2

    string HSC2Filmtitel = "High School Musical 2";
    string HSC2Udgivelsesdato = "5/10/2007";
    string HSC2Filmlængde = "1t 51m";
    double HSC2Rating = 5;

    //HSC3
    string HSC3Filmtitel = "High School Musical 3";
    string HSC3Udgivelsesdato = "24/10/2008";
    string HSC3Filmlængde = "2t";
    double HSC3Rating = 3.2;


    Movie* Grease = new Movie(GreaseFilmtitel, GreaseUdgivelsesdato, GreaseFilmlængde, GreaseRating);
    Movie* HSC2 = new Movie(HSC2Filmtitel, HSC3Udgivelsesdato, HSC3Filmlængde, HSC3Rating);
    Movie* HSC3 = new Movie(HSC3Filmtitel, HSC3Udgivelsesdato, HSC3Filmlængde, HSC3Rating);


    string FilmInfoTitel = placeholderfilmtitel;

    int FilmInfo[3] = { placeholderfilmlængde, placeholderudgivelsesdato, placeholderrating };

    //hovedmenu
    cout << "Velkommen til film menuen: " << endl << endl;
    cout <<"1. Tilfoej Film"<<endl<<"2. Filmliste" << endl << "3. Anmendelse" << endl << "4. Afslut" << endl;
    cin >> ValgAfMenu;

    if (ValgAfMenu == 1) {
        cout <<endl<< "Film titel: ";
        cin >> addfilmtitel;
        cout << "Længde af filmen: ";
        cin >> addfilmlængde;
        cout << "Udgivelses dato: ";
        cin >> addudgivelsesdato;
        cout << "Antal stjerner ud af 5: ";
        cin >> addrating;
        return ValgAfMenu;
    }

    else if (ValgAfMenu == 2) {
        system("cls");
        //filmliste menu
        cout << endl << "1. Grease" << endl << "2. High School Musical 2" << endl << "3. High School Musical 3" << endl << "4. Tilføjet film" << endl << endl;
        if (addfilmtitel != " ") {
            cout << addfilmtitel;
        }
        cin >> ValgAfFilm;


        if (ValgAfFilm == 1) {
            system("cls");
            cout << GreaseFilmtitel << endl << GreaseUdgivelsesdato << endl << GreaseFilmlængde << endl << GreaseRating;
        }
        else if (ValgAfFilm == 2) {
            system("cls");
            cout << HSC2Filmtitel << endl << HSC2Udgivelsesdato << endl << HSC2Filmlængde << endl << HSC2Rating;
        }
        else if (ValgAfFilm == 3) {
            system("cls");
            cout << HSC3Filmtitel << endl << HSC3Udgivelsesdato << endl << HSC3Filmlængde << endl << HSC3Rating;
        }
        else if (ValgAfFilm == 4) {
            system("cls");
            if (addfilmtitel == " ") {
                cout << "Filmen er ikke tilføjet på listen...";
            }
            else {
                cout << addfilmtitel << endl << addudgivelsesdato << endl << addfilmlængde << endl << addrating;
            }
        }
        else if (ValgAfFilm == 4) {
            cout << "hej"; //addfilm
        }

        else if (ValgAfMenu == 3) {
            system("cls");
            cout << "Dette er anmeldelses menuen. Her kan du vælge en film at anmelde: " << endl << endl;
            cout << "2. Anmeld film: ";
        }
        else if (ValgAfMenu <= 1 && ValgAfMenu >= 4) {
            exit;
        }
    }
    return 0;
}
