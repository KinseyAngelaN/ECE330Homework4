/* employee.cpp*/


#include <iostream>
#include <iomanip>


#include <string>


#include "employee.h"

using namespace std;

// constructor

Employee::Employee(long id, const string &last, const string &first, const string &initial,
		   int dept)
{
  myIdNum = id;
  myLastName = last;
  myFirstName = first;
  myMiddleInitial = initial;
  myDeptCode = dept;
}

//constructor for salaried employee

SalariedEmployee::SalariedEmployee(float msalary, float fraction)
{
  monthlySalary = msalary;
  fractoftime = fraction;
}

//constructor for hourly employee
HourlyEmployee::HourlyEmployee(float hours, float rate, float overtime)
{
  hoursWorked = hours;
  hourlyRate = rate;
  Overtime = overtime;
}

// Accessor function defintions

void Employee::setIdNum (const long  id)
{
  myIdNum = id;
}

long Employee:: getIdNum () const				// get id number
{
  return myIdNum;
}


void Employee:: setLastName (const string &last)	// set last name
{
  myLastName = last;
}


string Employee:: getLastName () const			// return last name
{
  return myLastName;
}
 
 
void Employee:: setFirstName (const string &first)	// set first name
{
  myFirstName = first;
}


string Employee:: getFirstName () const			// return first name
{
  return myFirstName;
}


void Employee:: setMiddleInitial (const string &last)	// set middle initial
{
  myMiddleInitial = last;
}


string Employee:: getMiddleInitial () const		// return middle initial
{
  return myMiddleInitial;
}


void Employee::setDeptCode (const int dc)		// set department code
{
  myDeptCode = dc;
}


int Employee:: getDeptCode () const				// get department code
{
  return myDeptCode;
}


void Employee:: printEmployee ()			// print Employee information
{
  cout << endl;
  cout << "Employee ID Number: " << getIdNum() << endl;
  cout << "Name: " << getLastName() <<", " << getFirstName() << " " <<
		getMiddleInitial() <<"." << endl;
  cout << "Dept Code: " << getDeptCode () << endl;  
}
void setFraction (const float fraction)
{
	fractoftime = fraction;
}

float getFraction () const
{
	return fractoftime;
}

void SalariedEmployee:: setSalary (const float msalary)		//set monthly salary
{
	monthlySalary = msalary;
}

float SalariedEmployee:: getSalary () const		//get monthly salary
{
	return monthlySalary;
}

float SalariedEmployee:: calcSalary()  			//calculate actual salary
{
	float salary;
	salary = getSalary() * getFraction();
	return salary;
}

void SalariedEmployee:: printSalary()			//print salary
{
  cout << "Salary:" << calcSalary() << endl;  
}	


void HourlyEmployee:: setHours (const float hours)		//set hours worked
{
	hoursWorked = hours;
}

float HourlyEmployee:: getHours () const		//get hours worked
{
	return hoursWorked;
}

void HourlyEmployee:: setOvertime (const float overtime)		//set overtime hours
{
	Overtime = overtime;
}

float HourlyEmployee:: getOvertime () const		//get overtime hours
{
	return Overtime;
}


void HourlyEmployee:: setRate (const float rate)		//set hourly rate
{
	hourlyRate = rate;
}

float HourlyEmployee:: getRate () const		//get hourly
{
	return hourlyRate;
}


float HourlyEmployee:: calcHSalary()  			//calculate actual salary
{
	float salary;
	salary = getHours() * getRate() + getOvertime() * 1.5 * getRate();
	return salary;
}

void HourlyEmployee:: printSalary()			//print salary
{
  cout << "Salary:" << calcHSalary() << endl;  
}	


