// Array of structor
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movie_t {
    string title;
    int year;
} films [3];

void printmovie (movie_t movie);

int main(){
    string mystr;
    int n;

    for(n = 0; n < 3; n++)
    {
        cout << "Enter title: ";
        getline (cin, films[n].title);
        cout << "Enter year: ";
        getline (cin, mystr);
        stringstream(mystr) >> films[n].year;
    }

    cout << "\nyou have entered these movies: \n";
    for(n = 0; n < 3; n++)
    {
        printmovie(films[n]);
    }

    return 0;
}


void printmovie (movie_t movie)
{
    cout << movie.title;
    cout << " (" << movie.year << " )" << endl;
}














