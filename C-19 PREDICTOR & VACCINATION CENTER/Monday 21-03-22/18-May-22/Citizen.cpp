#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <fstream>

// HEADER FILE :: Citizen.h
#include "Citizen.h"
// CHID OF CLASS HUMAN 
#include "Human.h"

using namespace std;

	// CONSTRUCTORS
	
// DEFAULT CONSTRUCTOR
Citizen::Citizen(){	}
	
// PARA. CONSTRUCTOR
Citizen::Citizen(bool Covid_History,bool Vaccine_Status,int Current_Date,int Next_Date,string Name,string Gender,string Address,string Center, string CNIC,	string Province, string City, string Contact, int Age):Human( Name, Gender, Address, Center, CNIC, Province, City, Contact, Age){
	this->Covid_History = Covid_History;
	this->Vaccine_Status = Vaccine_Status;
	this->Current_Date = Current_Date;
	this->Next_Date = Next_Date;
}

	// SET FUNCTIONS
void Citizen::SetCovid_History(bool a){
	Covid_History = a;
}
void Citizen::SetVaccine_Status(bool b){
	Vaccine_Status = b;
}	
void Citizen::SetCurrent_Date(int c){
	Current_Date = c;
}
void Citizen::SetNext_Date(int d){
	Next_Date = d;
}
	
	// GET FUNCTIONS
bool Citizen::GetCovid_History(){
	return Covid_History;
}
bool Citizen::GetVaccine_Status(){
	return Vaccine_Status;
}
int Citizen::GetCurrent_Date(){
	return Current_Date;
}
int Citizen::GetNext_Date(){
	return Next_Date;
}
	
	// CITIZEN :: SET DATA FUNCTION
void Citizen::Set_Citizen_Data(){
	
	int a;
	bool b;
	
	cout << "Enter Patient's Covid History: (0/1) " << endl;
	cin >> b;
	SetCovid_History(b);
	
	cout << "Enter Patient's Vaccine Status: (0/1) " << endl;
	cin >> b;
	SetVaccine_Status(b);
	
	cout << "Enter Patient's Current Vaccine Date: " << endl;
	cin >> a;
	SetCurrent_Date(a);
	
	cout << "Enter Patient's Next Vaccine Date: " << endl;
	cin >> a;
	SetNext_Date(a);	
}
