#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <stdlib.h>

// HEADER FILE :: HUMAN
#include "Human.h"
// HEADER FILE :: Citizen.h
#include "Citizen.h"
// HEADER FILE :: Medica_Staff
#include "Medical_Staff.h"

using namespace std;

	// 	CONSTRUCTORS
	
// 	DEFAULT CONSTRUCTOR
Human::Human(){	}	

// 	PARA. CONSTRUCTOR
Human::Human(string Name,string Gender,	string Address,	string Center, string CNIC,	string Province, string City, string Contact, int Age) {
	this->Name = Name;
	this->Gender = Gender;
	this->Address = Address;
	this->Center = Center;
	this->CNIC = CNIC;
	this->Province = Province;
	this->City = City;
	this->Contact = Contact;
	this->Age = Age;
}	


	// SET FUNCTIONS
	void Human::SetName(){
		cout << "Enter Your Name: ";
		getline(cin,Name);
	}
	void Human::SetGender(){
		cout << "Enter Your Gender: ";
		getline(cin,Gender);
	}
	void Human::SetAddress(){
		cout << "Enter Your Address: ";
		getline(cin,Address);
	}	
	void Human::SetCenter(){
		cout << "Enter Your Center: ";
		getline(cin,Center);
	}		
	void Human::SetCNIC(){
		cout << "Enter Your CNIC: ";
		getline(cin,CNIC);
	}		
	void Human::SetProvince(){
		cout << "Enter Your Province: ";
		getline(cin,Province);
	}
	void Human::SetCity(){
		cout << "Enter Your City: ";
		getline(cin,City);
	}	
	void Human::SetAge(){
		cout << "Enter Your Age: ";
		cin >> Age;
	}	
	void Human::SetContact(){
		cout << "Enter Your Contact: ";
		cin >> Contact;
	}	
//	void Human::SetCount(){
//		cout << "Enter Your Count: ";
//		cin >> Count;
//	}

	// GET FUNCTIONS	
	string Human::GetName(){
		return Name;
	}
	string Human::GetGender(){
		return Gender;
	}
	string Human::GetAddress(){
		return Address;
	}
	string Human::GetCenter(){
		return Center;
	}
	string Human::GetCNIC(){
		return CNIC;
	}
	int Human::GetAge(){
		return Age;
	}	
	string Human::GetProvince(){
		return Province;
	}
	string Human::GetCity(){
		return City;
	}
	string Human::GetContact(){
		return Contact;
	}

	// HUMAN :: SET DATA FUNCTION
void Human::Set_Human_Data(){
		
	cout << "Enter Patient's Name: " << endl;
	cin.ignore();	// IGNORE "\N"
	getline(cin,Name);
	
	cout << "Enter Patient's Gender: " << endl;
	cin.ignore();	// IGNORE "\N"
	getline(cin,Gender);
	
	cout << "Enter Patient's Address: " << endl;
	cin.ignore();	// IGNORE "\N"
	getline(cin,Address);
	
	cout << "Enter Patient's Center: " << endl;
	cin.ignore();	// IGNORE "\N"
	getline(cin,Center);
	
	cout << "Enter Patient's CNIC: " << endl;
	cin.ignore();	// IGNORE "\N"
	getline(cin,CNIC);
	
	cout << "Enter Patient's Province: " << endl;
	cin.ignore();	// IGNORE "\N"
	getline(cin,Province);
	
	cout << "Enter Patient's City: " << endl;
	cin.ignore();	// IGNORE "\N"
	getline(cin,City);
	
	cout << "Enter Patient's Age: " << endl;
	cin.ignore();	// IGNORE "\N"
	cin >> Age ;
	
	cout << "Enter Patient's Contact: " << endl;
	cin.ignore();	// IGNORE "\N"
	getline(cin,Contact);
	
}// end of "SET DATA"


	// DISPLAY MENU FUNCTION
void Human::Display_Menu(){
	
	char choice_1;
	
	cout << "Choose From The Following: " << endl << endl;
	cout << "A) Citizens. " << endl;
	cout << "B) Paramedical staff / Hospitals / Vaccination Centers." << endl;
	cin >> choice_1;
	
	switch(choice_1){
		case 'A':
			case 'a':{
				Citizen C;				// CREATING "OBJECT" OF "CITIZEN cLASS"
				C.Set_Citizen_Data();
				break;
			}
				
		case 'B':
			case 'b':{
				Medical_Staff M;
				M.Set_Medi_Staff_Data();	
				break;
			}
		default:
			cout << "Invalid Choice!!" << endl;	
	}
} // end of "DISPLAY MENU"
