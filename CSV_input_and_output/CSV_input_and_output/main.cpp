/*
* Ryan Secrest
* 4/26/2022
* Code learned from "Code Morsels" on youtube
* 
* Project runs fine but has errors that can be ignored for now...
* Error List: 
*	1) "debug assertion failed vector subsript out of range"
*		-somewhere the code is trying to access an element for which the vector has not declared yet.
*/

#include "CsvReader.h"
#include "CsvLine.h"

using namespace std;

int main()
{
	CsvReader reader;
	vector<CsvLine> lines = reader.read("biostats.csv", true);

	for (auto line : lines)
	{
		//cleaning up the string by removing white space and quotes
		string name = line.getString(0);
		name.erase(remove_if(name.begin(), name.end(), ::isspace), name.end());
		name.erase(remove(name.begin(), name.end(), '\"'), name.end());

		//cleaning up the string by removing white space and quotes
		string sex = line.getString(1);
		sex.erase(remove_if(sex.begin(), sex.end(), ::isspace), sex.end());
		sex.erase(remove(sex.begin(), sex.end(), '\"'), sex.end());

		//output data for testing
		cout << "  Name: " << name << endl;
		cout << "   Sex: " << sex << endl;
		cout << "   Age: " << line.getInt(2) << endl;
		cout << "Height: " << line.getDouble(3) << endl;
		cout << "Weight: " << line.getDouble(4) << endl;
		cout << endl;
	}

	return 0;
}