#pragma once
#include <iostream>
#include <string>
using namespace std;
struct movie {
	string name;
	string director;
	string genre;
	float rate;
	float price;
};
void addMovie(int size, movie array[]);
void searchByName(int size, movie array[]);
void searchByGenre(int size, movie array[]);
void searchByDirector(int size, movie array[]);
void popularMovie(int size, movie array[]);
