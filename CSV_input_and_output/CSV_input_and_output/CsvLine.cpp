#include "CsvLine.h"

void CsvLine::parse(string line, char delimiter)
{
	stringstream inLine(line);
	string tempColumn = "";

	while (getline(inLine, tempColumn, delimiter))
	{
		values.push_back(tempColumn);
	}
}

string CsvLine::getString(int column)
{
	return values[column];
}

double CsvLine::getDouble(int column)
{
	return atof(values[column].c_str());
}

int CsvLine::getInt(int column)
{
	return atoi(values[column].c_str());
}
