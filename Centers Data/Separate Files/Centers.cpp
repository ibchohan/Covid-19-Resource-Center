#include "Centers.h"
#include<iostream>
#include<string>
using namespace std;



Centers :: Centers(string name, int num, int day1, int day2, int day3, int numPatients1, int numPatients2, int numPatients3 ) : CenterName(name){

		setCenterNumber(num);
		
		setAvailabilityDay1(day1);
		
		setAvailabilityDay2(day2);
		
		setAvailabilityDay3(day3);
		
		setNoOfPatientsDay1(numPatients1);
		
		setNoOfPatientsDay2(numPatients2);
		
		setNoOfPatientsDay3(numPatients3);
}

void Centers :: setCenterNumber(int num){	if(num>0 && num<20){  CenterNumber = num;	}	}

void Centers :: setAvailabilityDay1(int day1){
			        if(day1==0 || day1==1) availability0fDays[0] = day1;
			        else availability0fDays[0] = 0;
		        }
	
void Centers :: setAvailabilityDay2(int day2){
			        if(day2==0 || day2==1) availability0fDays[1] = day2;
			        else availability0fDays[1] = 0;
		        }
	
void Centers :: setAvailabilityDay3(int day3){
			        if(day3==0 || day3==1) availability0fDays[2] = day3;
			        else availability0fDays[2] = 0;
	            }
	
void Centers :: setNoOfPatientsDay1(int num){
			        if(num>=0 || num<=200){
				        NoOfPatientsADay[0] = num;
			        }
			        else NoOfPatientsADay[0] = 0;
	            }
	
void Centers :: setNoOfPatientsDay2(int num){
			        if(num>=0 || num<=200){
				        NoOfPatientsADay[1] = num;
			        }
			        else NoOfPatientsADay[1] = 0;
		        }
	
void Centers :: setNoOfPatientsDay3(int num){
			        if(num>=0 || num<=200){
			            NoOfPatientsADay[2] = num;
			        }
			        else NoOfPatientsADay[2] = 0;
		        }
	
	S
