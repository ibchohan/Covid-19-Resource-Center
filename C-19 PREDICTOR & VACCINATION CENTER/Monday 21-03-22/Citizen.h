#ifndef CITIZEN_H
#define CITIZEN_H

// CHID OF CLASS HUMAN 
#include "Human.h"

class Citizen : public Human
{
	private:
		bool Covid_History;
		bool Vaccine_Status;
		int Current_Date;
		int Next_Date;
	public:
		Citizen();	// DEFAULT CONSTRUCTOR
		Citizen(bool Covid_History,	bool Vaccine_Status,int Current_Date,int Next_Date, string, string, string,	string, string,	string, string, string, int);	// PARA. CONSTRUCTOR
	
	// SET FUNCTIONS
	void SetCovid_History(bool a);
	void SetVaccine_Status(bool b);
	void SetCurrent_Date(int c);
	void SetNext_Date(int d);
	
	// GET FUNCTIONS
	bool GetCovid_History();
	bool GetVaccine_Status();
	int GetCurrent_Date();
	int GetNext_Date();

};

#endif
