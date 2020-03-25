#include "Movie.h"
#include <iostream>
#include <string>
using namespace std;

void addMovie(int size, movie array[])
{
	for (int i = 0; i < size; i++)
	{
		if (array[i].name == "" || array[i].director == "" || array[i].genre == "" || array[i].rate == 0 || array[i].price == 0)
		{
			cout << "EMPTY" << endl;
		}
		else
		{
			cout << "Name: " << array[i].name << endl;
			cout << "Director: " << array[i].director << endl;
			cout << "Genre: " << array[i].genre << endl;
			cout << "Rate: " << array[i].rate << endl;
			cout << "Price: " << array[i].price << endl;

		}
		cout << endl;
	}
	cout << "\tADD MOVIE" << endl;
	cout << endl;
	int number;
	cout << "Enter number of movie: ";
	cin >> number;
	number--;
	if (number >= size || number < 0)
	{
		cout << "Invalid numbe / no space" << endl;
	}
	else
	{
		cout << "Enter name: ";
		cin >> array[number].name;
		cout << "Enter director: ";
		cin >> array[number].director;
		cout << "Enter genre: ";
		cin >> array[number].genre;
		cout << "Enter rate: ";
		cin >> array[number].rate;
		cout << "Enter price: ";
		cin >> array[number].price;
	}
	cout << endl;
}
void searchByName(int size, movie array[])
{
	string search;
	cout << "Enter name of movie: ";
	cin >> search;
	for (int i = 0; i < size; i++)
	{
		if (array[i].name == search)
		{
			cout << "Name: " << array[i].name << endl;
			cout << "Director: " << array[i].director << endl;
			cout << "Genre: " << array[i].genre << endl;
			cout << "Rate: " << array[i].rate << endl;
			cout << "Price: " << array[i].price << endl;
		}
		else
		{

		}
		cout << endl;
	}
}
void searchByGenre(int size, movie array[])
{
	string genre;
	cout << "Enter genre of movie: ";
	cin >> genre;
	for (int i = 0; i < size; i++)
	{
		if (array[i].genre == genre)
		{
			cout << "Name: " << array[i].name << endl;
			cout << "Director: " << array[i].director << endl;
			cout << "Genre: " << array[i].genre << endl;
			cout << "Rate: " << array[i].rate << endl;
			cout << "Price: " << array[i].price << endl;

		}
		else
		{

		}
		cout << endl;
	}
}
void searchByDirector(int size, movie array[])
{
	string director;
	cout << "Enter director of movie: ";
	cin >> director;
	for (int i = 0; i < size; i++)
	{
		if (array[i].director == director)
		{
			cout << "Name: " << array[i].name << endl;
			cout << "Director: " << array[i].director << endl;
			cout << "Genre: " << array[i].genre << endl;
			cout << "Rate: " << array[i].rate << endl;
			cout << "Price: " << array[i].price << endl;
		}
		else
		{

		}
		cout << endl;
	}
}
void popularMovie(int size, movie array[])
{
	string genre;
	movie* temp = new movie[size];
	float max;
	int count = 0;
	int index;


	cout << "Enter genre of movie: ";
	cin >> genre;
	for (int i = 0; i < size; i++)
	{
		if (array[i].genre == genre)
		{
			temp[count].rate = array[i].rate;
			count++;
			for (int i = 0; i < count; i++)
			{
				if (i == 0)
				{
					max = temp[i].rate;
				}
				else
				{
					if (max < temp[i].rate)
					{
						max = temp[i].rate;
						index = i;
					}
				}
			}
		}
		else
		{

		}
	}
	cout << endl;
	cout << "The most popular of this genre is " << array[index].name << endl;;

}


