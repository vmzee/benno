#include <iostream>

using namespace std;

int main ()
{
	int weight = 0;
	int height = 0;
	
	cout << " Enter weight (ibs): ";
	cin >> weight;
	
	cout << " Enter height (in) ";
	cin >> height;
	
	int bmi = (weight)/ (height * height);
	
	cout << "\nYour BMI is: " << bmi << "\n\n";
	
	cout << "BMI VALUES \n";
	cout << "Underweight: less than 18.5 \n";
	cout << "Normal: between 18.5 and 24.9\n";
	cout << "Overweight: between 25 and 29.9 \n";
	cout << "Obese: 30 or greater \n";
	
	return 0;
}
