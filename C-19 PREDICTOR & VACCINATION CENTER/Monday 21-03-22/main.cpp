#include <iostream>
#include <string>
#include <iomanip>

// HEADER FILE :: HUMAN
#include "Human.h"
// HEADER FILE :: Medica_Staff
#include "Medical_Staff.h"
// HEADER FILE :: Citizen
#include "Citizen.h"

using namespace std;

int main() {

	Medical_Staff M(4,25000,"Muhammad Tahir","Male","Street 21-B, Block #5, PEACHS","Expo","42301-0793816-1","Sindh","Karachi","0307-9454287",20);
	
	
	cout << M.GetExperience();
	cout << endl << M.GetAddress();
	cout << endl << M.GetName();
	cout << endl << M.GetGender();
	cout << endl << M.GetCity();
	cout << endl << M.GetCNIC();
	
	return 0;
}
