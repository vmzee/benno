/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
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
 
#include <string>		//uses C++ string class
using namespace std;

class HealthProfile		//HealthProfile class definition
{

public:
	HealthProfile( string, string, string, int, int, int, int, double, int, int, int );
	int getAge();//set function to get age 
	double getBMI();//set function get bmi
	int getMaximumHeartRate();//set function get heartrate
	double getTargetHeartRate();
	void getInformation();// set function to get information
	
	int setAge(string);	// function to set age 
	int getAge(string);// function to get age
	double setBMI(string);// function to set BMI
	double getBMI(string);// function to get BMI
	int getMaximumHeartRate(string);// function to get heartrate
	int getMaximumHEartRate();
	
private:
	string firstName;		// variable for firstName
	string lastName;		// variable for lastName
	string gender;			// variable for gender
	int month;				// variable for integer
	int day;				// variable for  day
	int year;				// variable for year
	double height;			// variable for height
	int weight;				// variable for weight
	int age;				// variable for age
	
}; //end class HealthProfile for the header file
