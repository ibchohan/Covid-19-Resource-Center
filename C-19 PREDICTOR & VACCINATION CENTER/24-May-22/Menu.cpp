#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>

using namespace std;

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
// HEADER FILE :: Menu
#include "Menu.h"


	// CONSTRUCTORS
	
// DEFAULT CONSTRUCTOR
Menu::Menu(){ }

	// MENU :: MAIN MENU FUNCTION
void Menu::GetMainMenu(){
	
	Log_Sign L;
	Citizen C;
	Medical_Staff M;
	DecisionTree D;
	Inventory I;
	Centers CC;
	
//	system("color E5");
//    Intro();
//	getch();
	system("CLS");
	
	
do{
	if(L.Options()){
		char option;
		system("CLS");
		cout << "Choose From The Following: " << endl << endl;
		cout << "A) Citizen" << endl;
		cout << "B) Hospital" << endl;
		cout << "C) Decision Tree" << endl;
		cout << "D) Statics" << endl;
		cout << "E) Exit" << endl;
	    do{
			cin >> option;
			// CLEAR SCREEN
		}while(!(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c' || option=='D' || option=='d'));

	    switch (option){
			case 'A':
				case 'a':{
					C.Set_Human_Data();
					C.Set_Citizen_Data();
					/////
				    cout << "\n\n\n\t[PRESS 'ENTER' TO CONTINUE]" << endl;
				    getch();
				    //////
//					system("CLS");													////
//				    cout << "\n\tShowing You Stored Data!";
//				    cout << "\n\n\n\t[PRESS 'ENTER' TO CONTINUE]" << endl;
//				    getch();
//				    system("CLS");
//				    //////
//					C.DisplayData();
//					////													
//				    cout << "\n\n\n\t[PRESS 'ENTER' TO CONTINUE]" << endl;
//				    getch();													/////
				    system("CLS");
				    ///////
				    cout << "\n\t\n\tCENTER PART STARTED!";
				    /////
				    cout << "\n\n\n\t[PRESS 'ENTER' TO CONTINUE]" << endl;
				    getch();
				    system("CLS");			
					////////	    
					if(C.GetVaccine_Status() == 0){
						CC.All_Driver_Code();
					}
					
					//////////
					
					// CALL DECISION TREE
					break;
			}
			case 'B':
				case 'b':{			// switch case 1) Inventory 2) 		// INVENTORY
		        	
					char option;
				//	system("CLS");
					cout << "Choose From The Following: " << endl << endl;
					cout << "A) Medical Staff" << endl;
					cout << "B) Inventory" << endl;
					cout << "C) Exit" << endl;
				    do{
				    	fflush(stdin);
						cin >> option;
					}while(!(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c' || option=='E' || option=='e'));
		        	
		        	switch(option){
						case 'A':
							case 'a':{
								
								break;
							}
		        		case 'B':
							case 'b':{
								
								break;
							}
		        		case 'C':
							case 'c':{
								exit(0);
							}
		        		default:
							cout << "Invalid Choice!!" << endl;
							exit(0);
					}
		        	
					break;
			}
			case 'C':
				case 'c':{
				 	D.Choice();
				}
			case 'D':
				case 'd':{
				 //	CC.ShowData(TotalVaciinatedPeoplePerArea);		// function is in Centers.cpp
				}
			case 'E':
				case 'e':{
				 	exit(0);
				}
			default:
				cout << "Invalid Choice!!" << endl;
		}
	}
	cout << "end of program!";
	break;

}while(true);
		
}

	// MENU ::  STYLING FUNCTION
void Menu::gotoxy(int x, int y)
{

  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);

}
	// MENU ::  STYLING FUNCTION
void Menu::Intro(void)
    {
        int i;
        string p=" WELCOME TO COVID 19 PREDICTOR & VACCINATION CONSOLE BASED APPLICATION";
        gotoxy(14,12);

        for(i=0;i<12;i++){

            Sleep(55);
            cout<<":";
        }

        for(i=0;i<p.size();i++){

            Sleep(50);
            cout<<p[i];
        }

        for(i=0;i<12;i++){

            Sleep(55);
            cout<<":";
        }

        string d=" A Project developed by:";
        gotoxy(49,24);

        for(i=0;i<d.size();i++){

            Sleep(50);
            cout<<d[i];
        }

        string S="Sabika Shameel K21-4606";
        string I="Insha  Javed   K21-3279";
        string Y="Muhammad Tahir K21-4503";
        gotoxy(50,26);

        for(i=0;i<S.size();i++){

            Sleep(50);
            cout<<S[i];
        }

        gotoxy(50,27);

        for(i=0;i<I.size();i++){

            Sleep(50);
            cout<<I[i];

        }

        gotoxy(50,28);

        for(i=0; i<Y.size(); i++){

            Sleep(50);
            cout<<Y[i];
        }
    }
