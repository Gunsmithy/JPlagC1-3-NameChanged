//*********************************************
// Student Name: Dilon Cowling
// Student Number: 12345678
//
// SD 121 Lab: 01 Assignment: 01
//
// Filename: lab0101.cpp
// Date submitted: 15/09/2010
//
// I hereby declare that this code, submitted
// for credit for the course SD121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// has not been knowingly plagiarized by others.
//
// Signed,
//
//
//*********************************************
//filename: lab0101.cpp
// This program uses a loop
// to calculate squares of
// integers 3 to 9
#include <iostream>
using namespace std;
int main( )
{
int i = 0;
for ( i = 3; i <= 10; i++ )
{
cout << "i = " << i << " squared = " << i * i << endl;
}
cout << "\nPrinted by: Dilon Cowling - 12345678\n";
system("pause");
return 0;
}

/*
i = 3 squared = 9
i = 4 squared = 16
i = 5 squared = 25
i = 6 squared = 36
i = 7 squared = 49
i = 8 squared = 64
i = 9 squared = 81
i = 10 squared = 100

Printed by: Dilon Cowling - 12345678
*/
