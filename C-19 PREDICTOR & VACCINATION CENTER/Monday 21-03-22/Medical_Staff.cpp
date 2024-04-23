#include <iostream>
#include <string>
#include <iomanip>

// HEADER FILE :: Medica_Staff
#include "Medical_Staff.h"

	// 	CONSTRUCTORS

// 	DEFAULT CONSTRUCTOR
Medical_Staff::Medical_Staff(){	};	

//	PARA. CONSTRUCTOR
Medical_Staff::Medical_Staff(int Experience,double Salary,string Name,string Gender,string Address,string Center, string CNIC,	string Province, string City, string Contact, int Age):Human( Name, Gender, Address, Center, CNIC, Province, City, Contact, Age){
	this->Experience = Experience;
	this->Salary = Salary;
}

	// SET FUNCTIONS
void Medical_Staff::SetExperience(int a){
	Experience = a;
}
void Medical_Staff::SetSalary(double b){
	Salary = b;
}

	// GET FUNCTIONS
int Medical_Staff::GetExperience(){
	return Experience;
}
double Medical_Staff::GetSalary(){
	return Salary;
}
