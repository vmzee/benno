/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [BENJAMIN EFFIONG UWAK ]
 * Matric No:   [14/095244105]
 * Department:  [ COMPUTER SCIENCE ]
 *
 */
 
#include <iostream>
#include <string>
#include "HealthProfile.h"
using namespace std;

int main()
{
	//variable declaration
	string firstName;
	string lastName;
	string gender;
	int month;
	int day;
	int year;
	double height;
	int weight;
	int currentDay;
	int currentMonth;
	int currentYear;
	int usersAge;
	
	//prompt for patients information
	cout << "Welcome to our program to computerize healthcare records\n";
	cout << "Please fill-in your informations as requested. Thank you\n";
	cout << "\nKindly enter todays day, month and year using numeric representations only\n";
	cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software will break\n";
	
		
	cout << "First Name:"; // displays title First Name of the patient
	cin >> firstName; // input the first name of the patient
	
	cout << "Last Name:"; // displays title last name of the patient
	cin >> lastName; // input the last name of the patient
	
	cout << "Gender:"; // displays title  for gender (either male or female)
	cin >> gender; // input gender of patient
	
	cout << "height(in inches):"; // displays title height of patient
	cin >> height; // input the height of patient
	
	cout << "weight(in pounds):"; // displays title weight of patient
	cin >> weight; // input the weight of patient
	
	//variable declaration	
	int birthYear;
	
	cout << "Date of Birth" <<endl; 
	cout << "Month:"; // displays title date of birth
	cin >> month;
	
	cout << "Day:" ; // displays title date of birth
	cin >> day;
	
	cout << "Year:"; // displays title date of birth
	cin >> birthYear;

	cout<< "Current Date" <<endl;
	cout << "currentMonth:";
	cin >> currentMonth;
	
	cout << "currentDay:"; 
	cin >> currentDay;
	
	cout << "currentYear:";
	cin >> currentYear;
	
	usersAge = currentYear - birthYear;
	
	cout << "Age = "<<usersAge <<endl;
	
	string mystr;
	cout << "maximumHeartrate" <<endl; 

	//variable declaration
	int ageInyears;
	int maximumHeartrate;
	int targetHeartrate;
	
	cout << "user age in years:";// ask patient for user age in years
	cin >> ageInyears;
	 
	maximumHeartrate= 220-ageInyears;// calculates the maximum heart rate
	getline (cin, mystr);
		
	cout << "target heart rate:";
	cin >> targetHeartrate;
	
	cout << "maximumHeartrate:";// displays title maximum heart rate
	cin >>maximumHeartrate;

	targetHeartrate=50%-85% maximumHeartrate;// gets the target heart rate of the patient
	getline (cin, mystr);
		
	cout << "BMI values" <<endl;
	cout << "underweight: less than 18.5" <<endl;
	cout << "normal: between 18.5 and 24.9" <<endl;
	cout << "overweight: between 25 and 29.9" << endl;
	cout << "obese: 30 or greater" <<endl;
	 
	//variable declaration
	int BMI;
	
	cout << "BMI";
	cout << "Enter your weight(Kg)";
	cin >> weight;
	
	cout <<"Enter your height(m)" ;
	cin >>height;
	
	BMI= weight / height * height;
	
	if (BMI <= 18.5)
	cout << "Then you are underweight";
	else 
	if ((BMI > 18.5) && (BMI < 24.9))
	cout << "Your weight is normal";
	else
	if ((BMI > 25) && (BMI <29.9))
	cout << "You are obese";
	else
	cout << "You are obese";	
}
