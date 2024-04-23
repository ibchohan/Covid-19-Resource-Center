#ifndef MEDICAL_STAFF_H			// USING PURE VIRTUAL FUNCTION
#define MEDICAL_STAFF_H

// CHID OF CLASS HUMAN 
#include "Human.h"

class Medical_Staff : public Human
{
	private:
		int Experience;
		double Salary;
	public:
		Medical_Staff();	// 	DEFAULT CONSTRUCTOR
		Medical_Staff(int, double, string, string, string,	string, string,	string, string, string, int); // PARA. CONSTRUCTOR	
	
	// SET FUNCTIONS
	void SetExperience(int a);
	void SetSalary(double b);
	
	// GET FUNCTIONS
	int GetExperience();
	double GetSalary();


	// MEDICAL_STAFF :: SET DATA FUNCTION	
	void Set_Medi_Staff_Data();	
	
	// MEDICAL_STAFF :: GET DATA FUNCTION	
	void DisplayData();		// PURE VIRTUAL FUNCTION
};

#endif
