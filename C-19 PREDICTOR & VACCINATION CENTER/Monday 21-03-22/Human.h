#ifndef HUMAN_H
#define HUMAN_H

#include <string>
using namespace std;

class Human
{
	private:
		string Name;
		string Gender;
		string Address;
		string Center;
		string CNIC;
		string Province;
		string City;
		string Contact;
		int Age;
	//	static int Count;
				
	public:
		
	Human(); // DEFAULT CONSTRUCTOR
	Human(string, string, string, string, string, string, string, string, int);	// PARA. CONST.
		
	// SET FUNCTIONS
	void SetName();
	void SetGender();
	void SetAddress();	
	void SetCenter();		
	void SetCNIC();		
	void SetProvince();
	void SetCity();	
	void SetAge();	
	void SetContact();	
//	void SetCount();	
	
	// GET FUNCTIONS	
	string GetName();
	string GetGender();
	string GetAddress();
	string GetCenter();
	string GetCNIC();
	string GetProvince();
	string GetCity();
	string GetContact();
	int GetAge();

	// EXTRA FUNCTIONS
	
	void Set_Data(string , string , string , string , string , string Proince, string , int , string);

};

#endif
