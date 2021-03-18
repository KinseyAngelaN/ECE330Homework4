/* employee.h	*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee
{
public:
  Employee(long = 0, const string & ="" , const string & ="", const string & = "", int =0);	// constructor
  
  void setIdNum (const long );			// set id number
  long getIdNum () const;				// get id number
  void setLastName (const string &);	// set last name
  string getLastName () const;			// return last name
  void setFirstName (const string &);	// set first name
  string getFirstName () const;			// return first name
  void setMiddleInitial (const string &);	// set middle initial
  string getMiddleInitial () const;		// return set middle initial
  void setDeptCode(const int);			// set department code
  int getDeptCode () const;				// get department code
  void printEmployee ();				// print Employee information
 
  
  
private:
  long  myIdNum;			//Employee id number
  string myLastName;		//Employee last name
  string myFirstName;		//Employee first name
  string myMiddleInitial;	//Employee middle intial
  int myDeptCode;			//Department code
};

class SalariedEmployee: public Employee
{
public:
	SalariedEmployee(float = 0, float = 1, long = 0, const string & ="" , const string & ="", const string & = "", int =0);	// constructor
	void setSalary (const float);		// set salary
	float getSalary () const;		// get salary
	void setFraction (const float);
	float getFraction () const;
	float calcSalary ();		// calc salary 
	void printSalary ();			// print salary
private:	
	float monthlySalary;		//Employee monthly salary
	float fractoftime;		//Fraction of time employee worked
};


class HourlyEmployee: public Employee
{
public:
	HourlyEmployee(float = 0, float = 0, float = 0, long = 0, const string & ="" , const string & ="", const string & = "", int =0);	// constructor
	void setHours (const float);		// set hours worked
	float getHours () const;		// get hours worked
	void setRate (const float);		// set hourly rate
	void setOvertime (const float);		// set ovetime
	float getOvertime () const;		// get overtime
	float getRate () const;			// get hourly rate
	float calcHSalary ();		// calc salary 
	void printSalary ();			// print salary
private:	
	float hoursWorked;		//Employee's hours worked
	float hourlyRate;		//Employee's hourly rate
	float Overtime;
};



#endif
