#include <iostream>
#include <string>
#include <iomanip>

// HEADER FILE :: HUMAN
#include "Human.h"

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


void Human::Set_Data(string Name, string Gender, string Address, string Center, string CNIC, string Province, string City, int Age, string Contact){
		this->Name = Name;
		this->Gender = Gender;
		this->Address = Address;
		this->Center = Center;
		this->CNIC = CNIC;
		this->Province = Province;
		this->City = City;
		this->Age = Age;
		this->Contact = Contact;
}
