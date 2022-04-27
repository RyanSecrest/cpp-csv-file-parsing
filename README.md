## How to Remove White-space and Quotations While Parsing CSV Files in C++
### A common issue when importing data from csv files into your projects is that the csv file itself can be poorly formatted. You will learn how to combat these issues.
Used Visual Studio 2019

You only need to focus on main.cpp (look at the given csv file to better understand what is happening)

line 20, change "biostats.csv" to either the file location of your csv file or just the name if its in the correct resource folder.
on the same line in the read function mark true or false for if there is a header in your csv file. 

To remove whitespace: 
```
string name = line.getString(0);
name.erase(remove_if(name.begin(), name.end(), ::isspace), name.end());
```

To remove quotations:
```
string name = line.getString(0);
name.erase(remove(name.begin(), name.end(), '\"'), name.end());
```

Things to note:
  1) the number within the "getStrings" paranthesis is the column number. 0 corresponds to the first column, 1 is the second column etc.
  


