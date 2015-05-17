#include <iostream>
//even and odd solving program
using namespace std;

int main()
{
	int integer;
	
	// prompt user for integer obtain integer
	
	cout << "Please enter an integer"
	
	<<endl;
	
	cin >> integer;
	
	//determine if integer is odd or even
	
	
	if (integer % 2== 0 )
	
	// if integer when divided by 2 has no remainder then it is even
	
	cout << integer << " is even "
	    << endl;
	 
	 
	 else
	 
	 //the integer is odd
	 
	 
	 cout << integer << " is odd "
	 << endl;
	 
	 return 0;

}
