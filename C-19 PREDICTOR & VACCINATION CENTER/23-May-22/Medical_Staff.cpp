#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <fstream>

// HEADER FILE :: Medica_Staff
#include "Medical_Staff.h"
// CHID OF CLASS HUMAN 
#include "Human.h"

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

	// MEDICAL_STAFF :: SET DATA FUNCTION
void Medical_Staff::Set_Medi_Staff_Data(){
	
	int a; 
	double b;
	
	cout << "Enter Medical Staff's Experience: " << endl;
	cin >> a;
	SetExperience(a);
	
	cout << "Enter Medical Staff's Salary: " << endl;
	cin >> b;
	SetSalary(b);
}

void Medical_Staff::DisplayData(){

	cout << "\n\tName: " << GetName() 
		 <<	"\n\tGender: " << GetGender()
		 << "\n\tAddress: " << GetAddress()
		 << "\n\tCNIC: " << GetCNIC()
		 << "\n\tProvince: " << GetProvince()
		 << "\n\tCity: " << GetCity()
		 << "\n\tContact: " << GetContact()
		 << "\n\tAge: " << GetAge() << endl;
}
