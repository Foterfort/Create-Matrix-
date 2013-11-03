#include "stdafx.h"
#include "SortWords.h"


SortWords::SortWords() {
}

SortWords::~SortWords() {
}

bool SortWords::create‏(string path) {

	ifstream myfile (path);

	if (myfile.is_open()) {
		while (!myfile.eof()) {
			getline(myfile, _line);
			words.push_back(_line);
		}
		myfile.close();
		return true;
	}
	else {
		return false;
	}
}

bool SortWords::createListWords(int sizeX, int sizeY) {
	return 0;
}

char SortWords::createArrayHV() {
	return 0;
}

void SortWords::getStructWords() {
}