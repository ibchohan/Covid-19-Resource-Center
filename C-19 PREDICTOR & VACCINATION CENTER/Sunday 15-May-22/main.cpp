#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <fstream>

// HEADER FILE :: HUMAN
#include "Human.h"
// HEADER FILE :: Medical_Staff
#include "Medical_Staff.h"
// HEADER FILE :: Citizen
#include "Citizen.h"
// HEADER FILE :: Log_Sign
#include "Log_Sign.h"
// HEADER FILE :: DecisionTree
#include "DecisionTree.h"

using namespace std;

int main() {
	Log_Sign L;	
	
do{
	
	DecisionTree D;
	
	D.Choice();
	
//	L.Options();
//	cout << "HELLO";
//	break;
//	
	
	
}while(true);

//	Medical_Staff M(4,25000,"Muhammad Tahir","Male","Street 21-B, Block #5, PEACHS","Expo","42301-0793816-1","Sindh","Karachi","0307-9454287",20);
//	
//	
//	cout << M.GetExperience();
//	cout << endl << M.GetAddress();
//	cout << endl << M.GetName();
//	cout << endl << M.GetGender();
//	cout << endl << M.GetCity();
//	cout << endl << M.GetCNIC();
	
	return 0;
}
