#ifndef CSVREADER_H
#define CSVREADER_H

#include "CsvLine.h"

using namespace std;

class CsvReader
{
public:
	//constructor
	CsvReader() {}

	vector<CsvLine> read(string fileName, bool hasHeader = false);
	
};

#endif 
