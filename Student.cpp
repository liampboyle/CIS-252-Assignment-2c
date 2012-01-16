/* *********************************************************************
 * Liam Boyle
 * CIS 252-55Z1
 * Assignment:	Assignment 2 part 3 
 * Filename:	Student.cpp
 * Purpose:		Demonsrating expression on a data structure
 * Compiled for:	Ubuntu Linux 11.10
 * Compiled with:	g++ 4.6.1
 * IDE:				Geany 0.20
 * 16 Jan 2012
 * *********************************************************************
 */
 
// Include and Using Statements
#include<iostream>
#include<cstdlib>

using namespace std;

//Data structures
struct Student
{
	int creditHours;
	double gradePointAverage;
};

//Function Prototypes
	// pass

// Global Variable Declarations
int ExitStatusVar = 0;

int main()
{
	// Main function named constants
	const int HOURS_REQUIRED_TO_GRADUATE = 120;
	
	// Main function variable declarations
	Student oneSophomore;
	int hoursRemaining;
	
	// Main function code body
	
	//Input Sequence
	cout << "Please enter a student's credit hours:  ";
	cin >> oneSophomore.creditHours;
	cout << endl;
	
	cout << "Please enter the student's grade point average: ";
	cin >> oneSophomore.gradePointAverage;
	cout << endl;
	
	cout << "The number of credit hours is: " <<
		oneSophomore.creditHours << endl;
	cout << "The grade point average is: " <<
		oneSophomore.gradePointAverage << endl;
	
	hoursRemaining = HOURS_REQUIRED_TO_GRADUATE
		- oneSophomore.creditHours;
	cout << "This student needs " << hoursRemaining << " more credit "
		<< "hours to graduate" << endl;
	
	return ExitStatusVar;
}

// Function Definitions
	//pass
