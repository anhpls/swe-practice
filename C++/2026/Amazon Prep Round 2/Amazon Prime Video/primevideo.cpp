#include <iostream>
#include <vector>
using namespace std;

/**
At Amazon, we manage a large catalog of products for customers to browse and purchase.
One category in this catalog is movies.

Each movie has the following attributes:
	•	title
	•	genre
	•	release year

⸻

Part 1: Data Modeling

Create a way to represent a list of movies in code.
Movies can have different genres and release years.

⸻

Part 2: Filtering

Customers should be able to filter movies based on certain criteria, such as:
	•	genre only
	•	release year only
	•	genre and release year

Implement functionality that allows filtering movies based on these categories. 

 */

class Movie {   // could be a struct here since it is just a data object
    public:
        string title;
        string genre;
        int year;
    
    Movie(string t, string g, int y): title(t), genre(g), year(y) {}
};

class MovieInventory{
private:
        vector<Movie> movies;
public: 

    // add movies to the list of movies
    void addMovie(Movie m){
        movies.push_back(m);
    };

    // returns list of filtered movies;
    // const for genre as in don't change genre 
    // const for function as in don't modify movies list
    vector<Movie> filterMovie(const string& genre = "", int year = -1) const {
        vector<Movie> filteredList;

        // filter by genre
        for (const auto& movie : movies){
            // if genre filter is active AND movie's genre != genre filter then skip
            if(!genre.empty() && movie.genre != genre){
                continue;
            }
            // if year filter is active AND movie's year is not the filtered year, skip
            if(year != -1 && movie.year != year){
                continue;
            }
            // else, add movie to filteredList
            filteredList.push_back(movie);
        }

        return filteredList;
    };
};

static void printMovies(const vector<Movie>& list, const string& label){
    cout << "\n" << label << " (" << list.size() << "):\n";
    for(const auto& m : list){
        cout << "- " << m.title << " | " << m.genre << " | " << m.year << "\n";
    }
}

int main(){
    MovieInventory inv;
    inv.addMovie(Movie("Inception", "Sci-Fi", 2010));
    inv.addMovie(Movie("Interstellar", "Sci-Fi", 2014));
    inv.addMovie(Movie("The Dark Knight", "Action", 2008));
    inv.addMovie(Movie("Mad Max: Fury Road", "Action", 2015));
    inv.addMovie(Movie("The Hangover", "Comedy", 2009));

    printMovies(inv.filterMovie(), "No Filters (all movies)");
    printMovies(inv.filterMovie("Action"), "Filter: genre=Action");
    printMovies(inv.filterMovie("", 2024), "Filter: year=2024");
    printMovies(inv.filterMovie("Sci-Fi", 2014), "Filter: genre=Sci-Fi and year=2014");

    return 0;

}