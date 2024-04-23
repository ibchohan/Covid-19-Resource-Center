#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "DecisionTree.h"

DecisionTree::DecisionTree(){	}	// DEFAULT CONSTRUCTOR

void DecisionTree::Choice(){	// START OF Choice FUNCTION
	
	char t;		// TEMPORARY VARIABLES 
	
	cout << "\tCovid 19 PREDICTOR " << endl;	
	cout << endl << "Answer the Following: " << endl << endl;
	
	// LOW RISK
	cout << "Are you feeling Fever (>100.4) [Y/N] " << endl;
	cin >> t;
	if(t=='Y' || t=='y')	Fever = 1;	else 	Fever = 0;

	cout << "SoreThroat [Y/N] " << endl;
	cin >> t;
	if(t=='Y' || t=='y')	SoreThroat = 1;	else 	SoreThroat = 0;
	
	cout << "Heacdache [Y/N] " << endl;
	cin >> t;
	if(t=='Y' || t=='y')	Heacdache = 1;	else 	Heacdache = 0;
	
	cout << "RunnyNose [Y/N] " << endl;
	cin >> t;
	if(t=='Y' || t=='y')	RunnyNose = 1;	else 	RunnyNose = 0;
	
	cout << "BodyAches [Y/N] " << endl;
	cin >> t;
	if(t=='Y' || t=='y')	BodyAches = 1;	else 	BodyAches = 0;
	
	cout << "Dirhea [Y/N] " << endl;
	cin >> t;
	if(t=='Y' || t=='y')	Dirhea = 1;	else 	Dirhea = 0;
	
	// HIGH RISK
	cout << "Cough [Y/N] " << endl;
	cin >> t;
	if(t=='Y' || t=='y')	Cough = 1;	else 	Cough = 0;
	
	cout << "DifficultyBreathing [Y/N] " << endl;
	cin >> t;
	if(t=='Y' || t=='y')	DifficultyBreathing = 1;	else 	DifficultyBreathing = 0;
	
	cout << "LossTaste_Smell [Y/N] " << endl;
	cin >> t;	
	if(t=='Y' || t=='y')	LossTaste_Smell = 1;	else 	LossTaste_Smell = 0;
	
					// IF & ELSE CASES
					
		// HIGH RISK SYMPTONS			
	if(Cough==1 || DifficultyBreathing==1 || LossTaste_Smell==1){	
		
		cout << endl << "\tHIGH RISK SYMPTONS ARE FOUND!!! " << endl;
		CheckTested();	// #### CALLING (CheckTested) FUNCTION ####
		
	}
	else{	// LOW RISK SYMPTONS
			
/* 	  IF ANY "THREE" OF THE "LOW RISK SYMPTONS" ARE TRUE THEN PERSON HAS CHANCES OF HAVING "COVID-19"    */	
			
			cout << endl << "\tLOW RISK SYMPTONS ARE FOUND!!! " << endl;
			
		if(Fever==1 && SoreThroat==1 && Heacdache==1 || RunnyNose==1 || BodyAches==1 || Dirhea==1){
			if(Fever==1 || SoreThroat==1 && Heacdache==1 && RunnyNose==1 || BodyAches==1 || Dirhea==1){
				if(Fever==1 || SoreThroat==1 || Heacdache==1 && RunnyNose==1 && BodyAches==1 || Dirhea==1){
					if(Fever==1 || SoreThroat==1 || Heacdache==1 || RunnyNose==1 && BodyAches==1 && Dirhea==1){
						
						CheckTested();	// #### CALLING (CheckTested) FUNCTION ####	
								
					}
				}
			}	
		}
		else{
			
			cout << "ENJOY LIFE  :)" << endl;
			
		}

	}
			
}	// END OF CHOICE FUNCTION


void DecisionTree::CheckTested(){	// START OF CheckTested FUNCTION
	
	int Tested, Covid_check;	char t;	// TEMPORARY VARIABLES 
	
	cout << endl << "Tested [Y/N] " << endl;	// CHECK: EITHER "COVID TESTED OR NOT"
	cin >> t;
	if(t=='Y' || t=='y')	Tested = 1;	else 	Tested = 0; 
		
	if(Tested==1){	// COVID TESTED
		
		cout << "What was the result: Positive OR Negative: [P/N]" << endl;
		cin >> t;	
		if(t=='P' || t=='p')	Covid_check = 1;	else 	Covid_check = 0;
		
		if(Covid_check==1){	// Covid_check IS Positive
			
			cout << endl << "Stay Home until released from isolation, 10 Days after symptons onset, 24Hrs Fever-free, and Improving Symptons. " << endl;
			cout << "Get Symtomatic Treatment until get 'TESTED POSITIVE' " << endl;

	}
		else{	// Covid_check IS Negative
		
			CheckVaccinated();	// #### CALLING (CheckVaccinated) FUNCTION ####
		}
	}
	else{	// COVID UNTESTED
	
		cout << endl << "GET COVID TEST: " 	<< endl;
		CheckTested();	// #### CALLING (CheckTested) FUNCTION ####
		
	}
}	// END OF CheckTested FUNCTION


void DecisionTree::CheckVaccinated(){	// START OF CheckVaccinated FUNCTION
	
	int Vacc_check;		char t;	// TEMPORARY VARIABLES 
	
	cout << endl << "Are You Vaccinated? [Y/N]" << endl;
	cin >> t;
	if(t=='Y' || t=='y')	Vacc_check = 1;	else 	Vacc_check = 0; 
		
	if(Vacc_check==1){	// VACCINATED
	
		cout << endl << "Stay Home until released from isolation, 10 Days after symptons onset, 24Hrs Fever-free, and Improving Symptons. " << endl;

	}
	else{	// UNVACCINATED
	
		cout << endl << "Get Vaccinated." << endl;
	}
}	// END OF CheckVaccinated FUNCTION

