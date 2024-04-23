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
// HEADER FILE :: Inventory
#include "Inventory.h"
// HEADER FILE :: Centers
#include "Centers.h"

using namespace std;

int main() {
	Log_Sign L;
	Citizen C;
	Medical_Staff M;
	DecisionTree D;
	Inventory I;
	Centers CC;
	
	C.Set_Citizen_Data();
//	
//	I.Choice();
////	CC.All_Driver_Code();
//	
//
//do{
//	if(L.Options()){
//
//		char option;
//
//		cout << "Choose From The Following: " << endl << endl;
//		cout << "A) Citizen" << endl;
//		cout << "B) Hospital" << endl;
//		cout << "C) Decision Tree" << endl;
//		cout << "D) Exit" << endl;
//	    do{
//			cin >> option;
//			// CLEAR SCREEN
//		}while(!(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c' || option=='D' || option=='d'));
//
//	    switch (option){
//			case 'A':
//				case 'a':{
//					C.Set_Human_Data();
//					C.Set_Citizen_Data();
//					break;
//			}
//			case 'B':
//				case 'b':{
//					M.Set_Human_Data();
//		        	M.Set_Medi_Staff_Data();
//					break;
//			}
//			case 'C':
//				case 'c':{
//				 	D.Choice();
//				}
//			case 'D':
//				case 'd':{
//				 	exit(0);
//				}
//			default:
//				cout << "Invalid Choice!!" << endl;
//				exit(0);
//		}
//	}
//	cout << "end of program!";
//	break;
//
//}while(true);

	return 0;
}
