#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

int main()
{
	int choiseMenu;
	movie arrayMovies[50];

	do {
		cout << "\tMENU" << endl;
		cout << endl;
		cout << "1. Search movie by name" << endl;
		cout << "2. Search movie by genre" << endl;
		cout << "3. Search movie by director" << endl;
		cout << "4. The most popular film in genre" << endl;
		cout << "5. Show or add movie" << endl;
		cout << "6. Exit" << endl;
		cout << endl;
		cout << "Enter action -> ";
		cin >> choiseMenu;
		cout << endl;

		switch (choiseMenu)
		{
		case 1: cout << "\tSearch movie by name" << endl;

			searchByName(50, arrayMovies);

			break;
		case 2: cout << "\tSearch movie by genre" << endl;

			searchByGenre(50, arrayMovies);

			break;
		case 3: cout << "\tSearch movie by director" << endl;

			searchByDirector(50, arrayMovies);

			break;
		case 4: cout << "\tThe most popular film in genre" << endl;
			popularMovie(50, arrayMovies);
			break;
		case 5: cout << "\tShow and add movies" << endl;

			addMovie(50, arrayMovies);

			break;
		case 6: cout << "\tExit" << endl;

			cout << "Goodbye!" << endl;

			break;


		}
	} while (choiseMenu != 6);



	system("pause");
	return 0;
}