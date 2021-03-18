/* File: test.cpp */
// File to test the basic employee and two derived classes

#include<iostream>
#include <string>
#include "employee.h"

using namespace std;

int main() 
{
  Employee
  e1 (001, "Jones", "Booker", "T", 22),
  e2 (002, "Hendrix", "Jimi", "NMI", 14),
  e3 (003, "Morrison", "Jim", "D", 03);

  SalariedEmployee
	  s1 (5555, 1, 004, "Benatar", "Pat", "M", 05),
	  s2 (5555, .5, 005, "Jett", "Joan","M", 23);
  HourlyEmployee
	  h1 (160, 20, 0, 006, "Lennox", "Annie", "NMI", 16),
	  h2 (160, 20, 15, 007, "Turner", "Tina", "M", 30);

  e1.printEmployee();
  e2.printEmployee();
  s1.printSSalary();
  s2.printSSalary();
  h1.printHSalary();
  h2.printHSalary();
}
