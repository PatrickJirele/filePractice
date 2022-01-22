
#include <iostream>
#include <fstream>>

using namespace std;

void readFile(int&, int&, ifstream&);


int main()
{
  
	int x, y;
	ifstream testfile("data.txt"); // needs to save the data.txt file in the main

	while (!testfile.eof()) //  eof = end of file
	{
		//testfile >> x >> y;
		readFile(x, y, testfile);
		cout << x << " " << y << endl;
	}

}

void readFile(int& a, int& b, ifstream &theFile)
{
	theFile >> a >> b;
} // end readFile
