#include <iostream>
#include <stdlib.h>
#include "Movie.cpp"

using namespace std;
int ValgAfMenu;
int ValgAfFilm;

string placeholderfilmtitel;
int placeholderfilml�ngde;
int placeholderudgivelsesdato;
int placeholderrating;

int main() {

    Movie* addmovie;

    string addfilmtitel=" ";
    string addfilml�ngde;
    string addudgivelsesdato;
    double addrating;

    //Grease
    string GreaseFilmtitel = "Grease";
    string GreaseUdgivelsesdato = "15/9/1978";
    string GreaseFilml�ngde = "1t 50m";
    double GreaseRating = 3.6;

    //HSC2

    string HSC2Filmtitel = "High School Musical 2";
    string HSC2Udgivelsesdato = "5/10/2007";
    string HSC2Filml�ngde = "1t 51m";
    double HSC2Rating = 5;

    //HSC3
    string HSC3Filmtitel = "High School Musical 3";
    string HSC3Udgivelsesdato = "24/10/2008";
    string HSC3Filml�ngde = "2t";
    double HSC3Rating = 3.2;


    Movie* Grease = new Movie(GreaseFilmtitel, GreaseUdgivelsesdato, GreaseFilml�ngde, GreaseRating);
    Movie* HSC2 = new Movie(HSC2Filmtitel, HSC3Udgivelsesdato, HSC3Filml�ngde, HSC3Rating);
    Movie* HSC3 = new Movie(HSC3Filmtitel, HSC3Udgivelsesdato, HSC3Filml�ngde, HSC3Rating);


    string FilmInfoTitel = placeholderfilmtitel;

    int FilmInfo[3] = { placeholderfilml�ngde, placeholderudgivelsesdato, placeholderrating };

    //hovedmenu
    cout << "Velkommen til film menuen: " << endl << endl;
    cout <<"1. Tilfoej Film"<<endl<<"2. Filmliste" << endl << "3. Anmendelse" << endl << "4. Afslut" << endl;
    cin >> ValgAfMenu;

    if (ValgAfMenu == 1) {
        cout <<endl<< "Film titel: ";
        cin >> addfilmtitel;
        cout << "L�ngde af filmen: ";
        cin >> addfilml�ngde;
        cout << "Udgivelses dato: ";
        cin >> addudgivelsesdato;
        cout << "Antal stjerner ud af 5: ";
        cin >> addrating;
        return ValgAfMenu;
    }

    else if (ValgAfMenu == 2) {
        system("cls");
        //filmliste menu
        cout << endl << "1. Grease" << endl << "2. High School Musical 2" << endl << "3. High School Musical 3" << endl << "4. Tilf�jet film" << endl << endl;
        if (addfilmtitel != " ") {
            cout << addfilmtitel;
        }
        cin >> ValgAfFilm;


        if (ValgAfFilm == 1) {
            system("cls");
            cout << GreaseFilmtitel << endl << GreaseUdgivelsesdato << endl << GreaseFilml�ngde << endl << GreaseRating;
        }
        else if (ValgAfFilm == 2) {
            system("cls");
            cout << HSC2Filmtitel << endl << HSC2Udgivelsesdato << endl << HSC2Filml�ngde << endl << HSC2Rating;
        }
        else if (ValgAfFilm == 3) {
            system("cls");
            cout << HSC3Filmtitel << endl << HSC3Udgivelsesdato << endl << HSC3Filml�ngde << endl << HSC3Rating;
        }
        else if (ValgAfFilm == 4) {
            system("cls");
            if (addfilmtitel == " ") {
                cout << "Filmen er ikke tilf�jet p� listen...";
            }
            else {
                cout << addfilmtitel << endl << addudgivelsesdato << endl << addfilml�ngde << endl << addrating;
            }
        }
        else if (ValgAfFilm == 4) {
            cout << "hej"; //addfilm
        }

        else if (ValgAfMenu == 3) {
            system("cls");
            cout << "Dette er anmeldelses menuen. Her kan du v�lge en film at anmelde: " << endl << endl;
            cout << "2. Anmeld film: ";
        }
        else if (ValgAfMenu <= 1 && ValgAfMenu >= 4) {
            exit;
        }
    }
    return 0;
}
