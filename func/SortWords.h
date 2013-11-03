#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class SortWords {
public:
	SortWords();
	virtual ~SortWords();

	bool create‏(string path);
	bool createListWords(int sizeX, int sizeY);
	char createArrayHV();
	void getStructWords();

private:
	struct wordsStruct {
		string word; 
		int xStart, yStart;
		int xEnd, yEnd;
	} worker;

	int sizeX;
	int sizeY;

	string _line;

	vector<string> words;
	vector<string> wordsSelection;
	list<string> listWords;
};

