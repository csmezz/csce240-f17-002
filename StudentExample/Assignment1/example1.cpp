// Kendrick Dubose, 1/24/17 kdd1@email.sc.edu 

#include <iostream>
using namespace std; 
int main(int argc, char **argv)
{
	//Should take in 5 int 
	char * P; //created a pointer P 
	P = new char[5]; //created an array inside of that pointer
	cout << "Please insert 5 characters, and they will be printed out in the form of a box." << endl;
	
	cin >> P ;
    for( int i = 0; i < 5; i++)
    {	
       cout << P[i]<< P[i]<< P[i] << P[i] << P[i] << endl;
       
    }
    
    delete P;
	     
	 
	return 0;
}

