/* HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        [BENJAMIN EFFIONG UWAK ]
 * Matric No:   [14/095244105]
 * Department:  [ COMPUTER SCIENCE ]
 *
 */
 
#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // used iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
        					int day, int year, int weight, double height, int currentDay,
        					int currentMonth, int currentYear)
{
    setFirstName(firstName); // call set function to initialize firstName
    setLastName(lastName); // call set function to initialize lastName
    setGender(gender); // call set function to initialize gender
    setMonth(month); // call set function to initialize month
    setDay(day); // call set function to initialize day
    setYear(year); // call set function to initialize year
    setWeight( weight); // call set function to initialize weight
    setHeight(height); // call set function to initialize height
    setAge(currentDay, currentMonth, currentYear); // call set function to calculate age
}

// function to print object information
void HealthProfile::getInformation() 
{
    cout << "\n\nHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << "First Name: " << setw(17) << getFirstName() << endl;
    cout << "Last Name: " << setw(19) << getLastName() << endl;
    cout << "Gender: " << setw(20) << getGender() << endl;
    cout << "Date of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << "Weight (in kilograms): " << setw(3) << getWeight() << endl;
    cout << "Height (in meters): " << setw(10) << getHeight() << endl;
    cout << "Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << "Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << "Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\nBMI VALUES CHART" << endl;
    cout << "Underweight:   less than 18.5" << endl;
    cout << "Normal:        between 18.5 and 24.9" << endl;
    cout << "Overweight:    between 25 and 29.9" << endl;
    cout << "Obese:         30 or greater" << endl;
}

// implementation details for functions in HealthProfileStub.h

void HealthProfile::setFirstName(string firstName) {
    HealthProfile::firstName = firstName;
}

void HealthProfile::setLastName(string lastName) {
    HealthProfile::lastName = lastName;
}

void HealthProfile::setGender(string gender) {
    HealthProfile::gender = gender;
}

void HealthProfile::setDay(int day) {
    HealthProfile::day = day;
}

void HealthProfile::setMonth(int month) {
    HealthProfile::month = month;
}

void HealthProfile::setYear(int year) {
    HealthProfile::year = year;
}

void HealthProfile::setWeight(int weight) {
    HealthProfile::weight = weight;
}

void HealthProfile::setHeight(double height) {
    HealthProfile::height = height;
}

void HealthProfile::setAge(int currentDay, int currentMonth, int currentYear) {
    if (currentYear > HealthProfile::height) {
        if (currentMonth > HealthProfile::month) {
            if (currentDay > HealthProfile::day) {
                HealthProfile::age = currentYear - HealthProfile::year;
            } else {
                HealthProfile::age = currentYear - HealthProfile::year - 1;
            }
        } else {
            HealthProfile::age = currentYear - HealthProfile::year - 2;
        }
    } else {
        HealthProfile::age = 0;
    }
}
// return firstname
string HealthProfile::getFirstName() {
    return firstName;
}
// return lastname
string HealthProfile::getLastName() {
    return lastName;
}
// return gender
string HealthProfile::getGender() {
    return gender;
}
// return day
int HealthProfile::getDay() {
    return day;
}
// return month
int HealthProfile::getMonth() {
    return month;
}
// return year
int HealthProfile::getYear() {
    return year;
}
// return calculated weight
int HealthProfile::getWeight() {
    return weight;
}
// return calculated height
double HealthProfile::getHeight() {
    return height;
}
// return calculated age
int HealthProfile::getAge() {
    return age;
}
// calculate and return BMI
double HealthProfile::getBMI() {
    return weight / (pow(height, 2));
}
// calculate and return max. heart rate
int HealthProfile::getMaximumHeartRate() {
    return 220 - age;
}
// calculate and return target heart rate
double HealthProfile::getTargetHeartRate() {
return 0.5 * HealthProfile::getMaximumHeartRate();
}

double HealthProfile::getMinTargetHeartRate() {
    return 0.5 * HealthProfile::getMaximumHeartRate();
}
double HealthProfile::getMaxTargetHeartRate() {
    return 0.85 * HealthProfile::getMaximumHeartRate();
}
