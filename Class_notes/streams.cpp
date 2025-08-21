#include <iostream>
#include <fstream> // INCLUDE THIS CLASS TO READ IN FILES
#include <string>

using namespace std;

int main(){	
	// make sure lab10test.txt
	string fileName = "lab10test.txt";
	//Declare stream object
	ifstream inStream;

	string arrSt[100];
	int i = 0;
	inStream.open(fileName);

	if(!inStream.is_open()){
		cout << "file could not open. Exiting." << endl;
		exit(-1);
	}
	
	;

	// eof() returns a boolean true if end of 
	// file has been reached
	while(!inStream.eof()){
		inStream >> arrSt[i++];
	}

	inStream.close();

	for( int j = 0; j<i; j++)
		cout << arrSt[j] << endl;

	cout << "the number of words in the file is: " << i << endl;

	ofstream outStream;
	outStream.open("out.txt");

	for(int j = 0; j<i; j+=2)
		outStream << arrSt[j] << " ";
	outStream.close();

	return 0;
}

