#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "DecisionTree.h"

DecisionTree::DecisionTree(){
	LossTaste_Smell=DifficultyBreathing=Cough=Dirhea=BodyAches=RunnyNose=Heacdache=Fever=SoreThroat=0.0;	// initializing values to ZERO.

}	// DEFAULT CONSTRUCTOR

void DecisionTree::Choice(){	// START OF Choice FUNCTION
	
	char t,t2,t3,t5,t7,t9;	int t1=0,t4=0,t10;				// TEMPORARY 
	double temp1=0.0, temp2=0.0, temp3=0.0, temp4=0.0;		// VARIABLES 
	
	cout << "\tCovid 19 PREDICTOR " << endl;	
	cout << endl << "Answer the Following: " << endl << endl;
	
	cout << "[A] Are you feeling Fever (>100.4)" << endl;
	cout << "[B] Cough " << endl;
	
	do{
		cout << "Enter: " ;
		cin >> t;
	}while(!(t=='A' || t=='a' || t=='B' || t=='b'));	// Ensuring if number is in range...
	
	if(t=='A' || t=='a'){
		Fever = 0.5;		// Assiging Value (0 ~ 1)
		temp2=temp1 = Fever;	// Calculating Probability
		t1 = 1;
	}
	else if(t=='B' || t=='b'){
		Cough = 0.5;		// Assiging Value (0 ~ 1)
		temp3=temp4= Cough;		// Calculating Probability
		t1 = 2;
	}
	else{
		cout << "Invalid Input" << endl;
	}
	
	if(t1==1){
			cout << "\n[A] RunnyNose " << endl;
			cout << "[B] Heacdache " << endl;
			
			do{
				cout << "Enter: " ;
				cin >> t2;
			}while(!(t2=='A' || t2=='a' || t2=='B' || t2=='b'));	// Ensuring if number is in range...
			
			if(t2=='A' || t2=='a'){
				RunnyNose = 0.6;	// Assiging Value (0 ~ 1)
				temp1 *= RunnyNose;		// Calculating Probability
				t4 = 1;
			}		
			else if(t2=='B' || t2=='b'){
				Heacdache = 0.4;	// Assiging Value (0 ~ 1)
				temp2 *= Heacdache;		// Calculating Probability
				t4 = 2;
			}
			else{
				cout << "Invalid Input" << endl;
			}
				if(t4==1){
					cout << "\n[A] Shortness of Breath" << endl;
					cout << "[B] Congestion" << endl;
					
					do{
						cout << "Enter: " ;
						cin >> t5;
					}while(!(t5=='A' || t5=='a' || t5=='B' || t5=='b'));	// Ensuring if number is in range...
					
						if(t5=='A' || t5=='a'){
							Shortness_of_Breath = 0.6;		// Assiging Value (0 ~ 1)
							temp1 *= Shortness_of_Breath;		// Calculating Probability
						}		
						else if(t5=='B' || t5=='b'){
							Congestion = 0.4;		// Assiging Value (0 ~ 1)
							temp1 *= Congestion;		// Calculating Probability
						}
						else{
							cout << "Invalid Input" << endl;
						}	
				}
				else if(t4==2){
					cout << "\n[A] Cold" << endl;
					cout << "[B] Chills" << endl;
					
					do{
						cout << "Enter: " ;
						cin >> t7;
					}while(!(t7=='A' || t7=='a' || t7=='B' || t7=='b'));	// Ensuring if number is in range...
					
						if(t7=='A' || t7=='a'){
							Cold = 0.8;		// Assiging Value (0 ~ 1)
							temp2 *= Cold;		// Calculating Probability
						}		
						else if(t7=='B' || t7=='b'){
							Chills = 0.2;		// Assiging Value (0 ~ 1)
							temp2 *= Chills;		// Calculating Probability
						}
						else{
							cout << "Invalid Input" << endl;
						}
				}
				else{
					cout << "Invalid Input" << endl;
				}
	}
	else if(t1==2){
		cout << "\n[A] BodyAches " << endl;
		cout << "[B] LossTaste_Smell " << endl;
		
		do{
			cout << "Enter: " ;
			cin >> t3;
		}while(!(t3=='A' || t3=='a' || t3=='B' || t3=='b'));	// Ensuring if number is in range...
		
		if(t3=='A' || t3=='a'){
				BodyAches = 0.6;	// Assiging Value (0 ~ 1)
				temp3 *= BodyAches;		// Calculating Probability
				t10 = 1;
			}		
			else if(t3=='B' || t3=='b'){
				LossTaste_Smell = 0.8;		// Assiging Value (0 ~ 1)
				temp4 *= LossTaste_Smell;		// Calculating Probability
				t10 = 2;
			}
			else{
				cout << "Invalid Input" << endl;
			}		
				if(t10==1){
					cout << "\n[A] Nausea" << endl;
					cout << "[B] Sore Throat" << endl;
					do{
						cout << "Enter: " ;
						cin >> t9;
					}while(!(t9=='A' || t9=='a' || t9=='B' || t9=='b'));	// Ensuring if number is in range...
					
						if(t9=='A' || t9=='a'){
							Nausea = 0.4;		// Assiging Value (0 ~ 1)
							temp3 *= Nausea;		// Calculating Probability
						}		
						else if(t9=='B' || t9=='b'){
							SoreThroat = 0.6;		// Assiging Value (0 ~ 1)
							temp3 *= SoreThroat;		// Calculating Probability
						}
						else{
							cout << "Invalid Input" << endl;
						}	
				}
				else if(t10==2){
					cout << "\n[A] Vomiting" << endl;
					cout << "[B] DifficultyBreathing" << endl;
					do{
						cout << "Enter: " ;
						cin >> t9;
					}while(!(t9=='A' || t9=='a' || t9=='B' || t9=='b'));	// Ensuring if number is in range...
					
						if(t9=='A' || t9=='a'){
							Vomiting = 0.2;		// Assiging Value (0 ~ 1)
							temp4 *= Vomiting;		// Calculating Probability
						}		
						else if(t9=='B' || t9=='b'){
							DifficultyBreathing = 0.8;		// Assiging Value (0 ~ 1)
							temp4 *= DifficultyBreathing;		// Calculating Probability
						}
						else{
							cout << "Invalid Input" << endl;
						}
				}
				else{
					cout << "Invalid Input" << endl;
				}
	}
		///////////////// DECISION /////////////////////

	if(temp1==0.18){	// case 1 
		cout << " According to your symptoms there is a "<<temp1<<"% chance that you are COVID positive." << endl;
	}
	else if(temp2==0.16){	// case 2
		cout << " According to your symptoms there is a "<<temp2<<"% chance that you are COVID positive."<< endl;	
	}
	else if(temp3==0.18){	// case 3
		cout << " According to your symptoms there is a "<<temp3<<"% chance that you are COVID positive." << endl;	
	}
	else if(temp4>=0.32){	// case 4
		cout << " According to your symptoms there is a " <<temp4<<"% chance that you are COVID positive."<< endl;	
	}
	else if(temp1<0.18){	// case 5
		cout << " According to your symptoms there is a "<<1-temp1<<"% chance that you have FLU." << endl;
	}
	else if(temp2<0.16){	// case 6
		cout << " According to your symptoms there is a "<<1-temp2<<"% chance that you have FLU." << endl;
	}
	else if(temp3<0.18){	// case 7
		cout << " According to your symptoms there is a "<<1-temp3<<"% chance that you have FLU." << endl;
	}
	else if(temp4<0.32){	// case 8
		cout << " According to your symptoms there is a "<<1-temp4<<"% chance that you have FLU." << endl;
	}
		
}	// END OF CHOICE FUNCTION
