//Main module for basketball stats app
//Authors: Nikhil Roy and Ashwin Kommajesula


//Import libaries
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>


using namespace std;


int main()
{

	
	
	ifstream file ( "/home/ubuntu/Desktop/BasketbalStat/leagues_NBA_2014_totals_totals.csv" );
	string value;
	cout << "dgad" << endl;
	while ( file.good() )
	{
     		getline ( file, value, ',' ); // read a string until next comma: http://www.cplusplus.com/reference/string/getline/
     		cout << string( value, 1, value.length()-2 ); // display value removing the first and the last character from it
		cout << "we here" << endl;
	}
	cout << "a" << endl;
}
