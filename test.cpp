/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "employee.h"

using namespace std;

int main() 
{
  Employee
  e1 (001, "Jones", "Booker", "T", 22),
  e2 (002, "Hendrix", "Jimi", "NMI ", 14),
  e3 (003, "Morrison", "Jim", "D", 03);

  SalariedEmployee
	  s1 (5555, 1, 004, "Benatar", "Pat" "M", 05),
	  s2 (5555, .5, 005, "Jett", "Joan","M", 23);

  e1.printEmployee();
  e2.printEmployee();
}
