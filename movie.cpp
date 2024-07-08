#include <iostream>

using namespace std;

//string text;






class Movie {
public:
    string title;
    //int AntalFilm; Class Filmliste?
    string length;
    string releasedate;
    int AvgRating;
    double Rating;



    Movie(string movie_title, string movie_releasedate, string movie_length, double movie_rating) {
        title = movie_title;
        releasedate = movie_releasedate;
        length = movie_length;
        Rating = movie_rating;

    }
    /*int Rating() {
        int stars = 1;

        if (stars <= 1 && stars >= 5) {
            cout << "Hvor mange stjerner ud af 5 giver du filmen?";
            cin >> stars;
        }
        else {
            cout << "Stjerner angives mellem 1 og 5!";
        }
        return stars;*/
private:



};



class MovieList {
public:

    //int AddMovie;
    Movie* Grease;
    Movie* HSC2;
    Movie* HSC3;

private:

};


class RatingList {
public:

private:
};