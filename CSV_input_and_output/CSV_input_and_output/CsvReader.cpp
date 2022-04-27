#include "CsvReader.h"

vector<CsvLine> CsvReader::read(string fileName, bool hasHeader)
{
	ifstream inFile;
	vector<CsvLine> lines;
	inFile.open(fileName.c_str());

	string line = "";

	if (hasHeader)
		getline(inFile, line);

	while (getline(inFile, line))
	{
		CsvLine csvLine;
		csvLine.parse(line);
		lines.push_back(csvLine);
	}

	return lines;
}