#ifndef CSVLINE_H
#define CSVLINE_H

#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

class CsvLine
{
public:
	//constructor
	CsvLine() {}

	//copy constructor
	CsvLine(const CsvLine& other)
	{
		values = other.values;
	}
	//overload contructor for assignment operator
	CsvLine operator=(const CsvLine& other)
	{
		values = other.values;
	}

	//deconstructor
	~CsvLine() {}

	//functions
	void parse(string line, char delimiter = ',');
	string getString(int column);
	double getDouble(int column);
	int getInt(int column);

private:
	vector<string> values;
};

#endif