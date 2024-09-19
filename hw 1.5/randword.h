#pragma once
#include <iostream>
#ifndef RANDWORD_H
#define RANDWORD_H
#include "randword.h"
#include <string>
#include <vector>
#include<fstream>
using namespace std;

void InitDictionary(const string& filename);
static vector<string> dictionary;
string RandomWord();

#endif

void InitDictionary(const string& filename) {
	ifstream file(filename);
	string word;
	while (getline(file, word))
	{
		dictionary.push_back(word);
	}
	srand(static_cast<unsigned int>
		(time(nullptr)));
}
string RandomWord()
{
	int index = rand() % dictionary.size();
	return dictionary[index];
}