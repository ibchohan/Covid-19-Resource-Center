#include<iostream>
#include<string>
#include<ctime>
using namespace std;


//class prototype

class Centers{
	
	public:
		string CenterName;
	    int CenterNumber, availability0fDays[3], NoOfPatientsADay[3];
		
		Centers(string name, int num, int day1, int day2, int day3, int numPatients1, int numPatients2, int numPatients3 );
		
		void setCenterNumber(int num);
		
		void setAvailabilityDay1(int day1);
		
		void setAvailabilityDay2(int day2);
		
		void setAvailabilityDay3(int day3);
		
		void setNoOfPatientsDay1(int num);
		
		void setNoOfPatientsDay2(int num);
		
		void setNoOfPatientsDay3(int num);
};




//class functions
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
	
	
	
	
// Main Function

int main(){
	
	int AreaChoice, CenterChoice, DateChoice, numberOfAppointments;
	
	
//Setting up Centers Data
	Centers CentersData[] = {   Centers("Patel Hospital",1,0,1,0,0,3,2), Centers("Agha Khan University Hospital",2,0,1,1,0,3,3), Centers("Asfaq Memorial Hospital",3,1,1,0,3,3,2), Centers("Memon Hospital",4,1,0,0,3,0,0),
	                            Centers("University of Karachi",5,0,1,0,0,3,2), Centers("Sindh Government Hospital Korangi 5",6,0,1,0,0,3,0), Centers("Juma Goth Dispencery",7,0,0,1,0,2,3), Centers("Landhi Medical Complex",8,0,0,1,2,1,3),
	                            Centers("Sindh Goverment Qatar Hospital",9,1,0,0,3,1,2), Centers("RHC Moangopir",10,0,0,0,3,2,0), Centers("Rehamn General Hospital",11,0,0,0,1,2,0), Centers("Holy Family Hospital",12,1,1,0,3,3,0),
	                            Centers("Taj Medical Complex",13,0,1,1,0,3,3), Centers("Al-Khaleej Tower ",14,0,1,0,2,3,0), Centers("Ziauddin Hospital Kemari",15,0,1,0,0,3,0), Centers("KPT Hospital",16,1,0,0,3,1,2)  };
	
	
//Setting up Time/Date
    time_t now;
	struct tm nowlocal;
	now = time(NULL);
	nowlocal = *localtime(&now);
	
while(1){
	cout<<"\n\n Enter the Number of Vaccination Appointments that needs to be scheduled: ";
    cin>>numberOfAppointments;
    if(numberOfAppointments<0 || numberOfAppointments>5) cout<<"Either you have entered an invalid number OR the number of appointments exceeds the maximum limit of 5. Please, try again!.";
    else break;
}
	
	
//Select a center & schedule an appointment	
for(int i=0; i<numberOfAppointments; i++){
	system ("CLS");
	while(1){
	cout<<"Select an Area (Karachi), to choose from the centers nearest to you"
	    <<"\n (1)    Gulshan-e-Iqbal"
	    <<"\n (2)    Gulistan-e-Johar"
	    <<"\n (3)    Korangi Town"
	    <<"\n (4)    Malir"
	    <<"\n (5)    New Karachi"
	    <<"\n (6)    North Nazimabad"
	    <<"\n (7)    Saddar"
	    <<"\n (8)    Clifton\n\nEnter your Choice => ";
	    
	    cin>>AreaChoice;
	    
	    if(AreaChoice<1 || AreaChoice>16){
	    	cout<<"\t<<<Invalid Input, Please Try Again.>>>";
		}
		else break;
    };
    system ("CLS");
    switch(AreaChoice){
    	case 1:
    		//while(1){
	    		cout<<"\nArea -----> Gulshan-e-Iqbal"<<endl;
	    		cout<<"\nList of Centers Near You & Available Dates : "<<endl;
	    		
//Patel Hospital
	    		cout<<"\n (1)    Patel Hospital"
	    		    <<"\n        Available Dates:";
	    		    if((CentersData[0].availability0fDays[0]) == 0){
	                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[0].availability0fDays[1] == 0){
	                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[0].availability0fDays[2] == 0){
	                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }     
                    if(CentersData[0].availability0fDays[0] == 1 && CentersData[0].availability0fDays[1] == 1 && CentersData[0].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					}
					
//AGHA                    
	    		cout<<"\n\n (2)    Agha Khan University Hospital"
		    		<<"\n        Available Dates:";
		    		    if(CentersData[1].availability0fDays[0] == 0){
		                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[1].availability0fDays[1] == 0){
		                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[1].availability0fDays[2] == 0){
		                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }   
	                    if(CentersData[1].availability0fDays[0] == 1 && CentersData[1].availability0fDays[1] == 1 && CentersData[1].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					    }
					
//Ashfaq Memorial Hospital						  
	    		cout<<"\n\n (3)    Asfaq Memorial Hospital "
	    		    <<"\n        Available Dates:";
		    		    if(CentersData[2].availability0fDays[0] == 0){
		                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[2].availability0fDays[1] == 0){
		                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[2].availability0fDays[2] == 0){
		                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }  
	                    if(CentersData[2].availability0fDays[0] == 1 && CentersData[2].availability0fDays[1] == 1 && CentersData[2].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					}
	                    
				while(1){		   
		    		cout<<"\n\nEnter Your Center Choice: ";
		    		cin>>CenterChoice;
		    		cout<<"Enter Your Preferred Date: ";
		    		cin>>DateChoice;
		    		    
	    		    if(!(CenterChoice>0 && CenterChoice<=3 && CentersData[CenterChoice-1].availability0fDays[DateChoice-1] == 0 && (DateChoice==1 || DateChoice==2 || DateChoice==3))){
		    	        cout<<"\n\t<<<Invalid Input, Please Try Again.>>>";
			        }
			        else break;
		        }
		        CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		        if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		        system ("CLS");
		        cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
		        cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		            <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Gulshan-e-Iqbal."
		            <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
		        cout<<"\n----------------------------------------------------------------------------------------------------------";
		    
			break;		
//		    }
//			break;
		
//case 2:
			case 2:
    		while(1){
	    		cout<<"\nArea -----> Gulistan-e-Johar"<<endl;
	    		cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    		
//Memon Hospital
	    		cout<<"\n (4)    Memon Hospital"
	    		    <<"\n        Available Dates:";
	    		    if((CentersData[3].availability0fDays[0]) == 0){
	                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[3].availability0fDays[1] == 0){
	                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[3].availability0fDays[2] == 0){
	                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }     
                    if(CentersData[3].availability0fDays[0] == 1 && CentersData[3].availability0fDays[1] == 1 && CentersData[3].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					}
//UOK                    
	    		cout<<"\n\n (5)    University of Karachi"
		    		<<"\n        Available Dates:";
		    		    if(CentersData[4].availability0fDays[0] == 0){
		                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[4].availability0fDays[1] == 0){
		                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[4].availability0fDays[2] == 0){
		                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }     
	                    if(CentersData[4].availability0fDays[0] == 1 && CentersData[4].availability0fDays[1] == 1 && CentersData[4].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					}
	                
	                    
				while(1){		   
		    		cout<<"\n\nEnter Your Center Choice: ";
		    		cin>>CenterChoice;
		    		cout<<"Enter Your Preferred Date: ";
		    		cin>>DateChoice;
		    		    
	    		    if(!(CenterChoice>3 && CenterChoice<=5 && CentersData[CenterChoice-1].availability0fDays[DateChoice-1] == 0 && (DateChoice==1 || DateChoice==2 || DateChoice==3)) ){
		    	        cout<<"\n\t<<<Invalid Input, Please Try Again.>>>";
			        }
			        else break;
		        }
		        CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		        if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		        system ("CLS");
		        cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
		        cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		            <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Gulistan-e-Johar."
		            <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
		        cout<<"\n----------------------------------------------------------------------------------------------------------";
		    
			break;		
			}
			break;
			
		case 3:
				while(1){
	    		cout<<"\nArea -----> Korangi Town"<<endl;
	    		cout<<"\nList of Centers Near You & their Availability : "<<endl;
//Sindh Government Hospital 
	    		cout<<"\n (6)    Sindh Government Hospital Korangi 5"
	    		    <<"\n        Available Dates:";
	    		    if((CentersData[5].availability0fDays[0]) == 0){
	                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[5].availability0fDays[1] == 0){
	                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[5].availability0fDays[2] == 0){
	                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }     
                    if(CentersData[5].availability0fDays[0] == 1 && CentersData[5].availability0fDays[1] == 1 && CentersData[5].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					}

	                    
				while(1){		   
		    		cout<<"\n\nEnter Your Center Choice: ";
		    		cin>>CenterChoice;
		    		cout<<"Enter Your Preferred Date: ";
		    		cin>>DateChoice;
		    		    
	    		    if(!(CenterChoice==6 && CentersData[CenterChoice-1].availability0fDays[DateChoice-1] == 0 && (DateChoice==1 || DateChoice==2 || DateChoice==3))){
		    	        cout<<"\n\t<<<Invalid Input, Please Try Again.>>>";
			        }
			        else break;
		        }
		        CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		        if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		        system ("CLS");
		        cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
		        cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		            <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Korangi Town."
		            <<"\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
		        cout<<"\n----------------------------------------------------------------------------------------------------------";
		    
			break;		
			}
			break;
			
		case 4:
    		while(1){
	    		cout<<"\nArea -----> Malir"<<endl;
	    		cout<<"\nList of Centers Near You & their Availability : "<<endl;
//Juma Goth Dispencery
	    		cout<<"\n (7)    Juma Goth Dispencery"
	    		    <<"\n        Available Dates:";
	    		    if((CentersData[6].availability0fDays[0]) == 0){
	                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[6].availability0fDays[1] == 0){
	                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[6].availability0fDays[2] == 0){
	                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }     
                    if(CentersData[6].availability0fDays[0] == 1 && CentersData[6].availability0fDays[1] == 1 && CentersData[6].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					}
					
//Landhi Medical Complex                   
	    		cout<<"\n\n (8)    Landhi Medical Complex"
		    		<<"\n        Available Dates:";
		    		    if(CentersData[7].availability0fDays[0] == 0){
		                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[7].availability0fDays[1] == 0){
		                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[7].availability0fDays[2] == 0){
		                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    } 
						if(CentersData[7].availability0fDays[0] == 1 && CentersData[7].availability0fDays[1] == 1 && CentersData[7].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					}    
	                    
				while(1){		   
		    		cout<<"\n\nEnter Your Center Choice: ";
		    		cin>>CenterChoice;
		    		cout<<"Enter Your Preferred Date: ";
		    		cin>>DateChoice;
		    		    
	    		    if(!((CenterChoice==7 || CenterChoice==8 )&& CentersData[CenterChoice-1].availability0fDays[DateChoice-1] == 0 && (DateChoice==1 || DateChoice==2 || DateChoice==3))){
		    	        cout<<"\n\t<<<Invalid Input, Please Try Again.>>>";
			        }
			        else break;
		        }
		        CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		        if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		        system ("CLS");
		        cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
		        cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		            <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Malir."
		            <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
		        cout<<"\n----------------------------------------------------------------------------------------------------------";
		    
			break;		
			}
			break;
			
		case 5:
    		while(1){
	    		cout<<"\nArea -----> New Karachi"<<endl;
	    		cout<<"\nList of Centers Near You & their Availability : "<<endl;
//Sindh Government Qatar Hospital
	    		cout<<"\n (9)    Sindh Government Qatar Hospital"
	    		    <<"\n        Available Dates:";
	    		    if((CentersData[8].availability0fDays[0]) == 0){
	                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[8].availability0fDays[1] == 0){
	                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[8].availability0fDays[2] == 0){
	                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }     
                    if(CentersData[8].availability0fDays[0] == 1 && CentersData[8].availability0fDays[1] == 1 && CentersData[8].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					}
//RHC Mangopi                  
	    		cout<<"\n\n (10)    RHC Mangopir"
		    		<<"\n        Available Dates:";
		    		    if(CentersData[9].availability0fDays[0] == 0){
		                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[9].availability0fDays[1] == 0){
		                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[9].availability0fDays[2] == 0){
		                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    } 
						if(CentersData[9].availability0fDays[0] == 1 && CentersData[9].availability0fDays[1] == 1 && CentersData[9].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					    }    
	                    
				while(1){		   
		    		cout<<"\n\nEnter Your Center Choice: ";
		    		cin>>CenterChoice;
		    		cout<<"Enter Your Preferred Date: ";
		    		cin>>DateChoice;
		    		    
	    		    if(!((CenterChoice==9 || CenterChoice==10 )&& CentersData[CenterChoice-1].availability0fDays[DateChoice-1] == 0 && (DateChoice==1 || DateChoice==2 || DateChoice==3))){
		    	        cout<<"\n\t<<<Invalid Input, Please Try Again.>>>";
			        }
			        else break;
		        }
		        CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		        if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		       system ("CLS");
		        cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
		        cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		            <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<",New Karachi."
		            <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
		        cout<<"\n----------------------------------------------------------------------------------------------------------";
		    
			break;		
			}
			break;
			
		case 6:
    		//while(1){
	    		cout<<"\nArea -----> North Nazimabad"<<endl;
	    		cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    		
//Rehman General Hospital
	    		cout<<"\n (11)    Rehman General Hospital"
	    		    <<"\n        Available Dates:";
	    		    if((CentersData[10].availability0fDays[0]) == 0){
	                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[10].availability0fDays[1] == 0){
	                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[10].availability0fDays[2] == 0){
	                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }   
                    if(CentersData[10].availability0fDays[0] == 1 && CentersData[10].availability0fDays[1] == 1 && CentersData[10].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					} 
	                    
				while(1){		   
		    		cout<<"\n\nEnter Your Center Choice: ";
		    		cin>>CenterChoice;
		    		cout<<"Enter Your Preferred Date: ";
		    		cin>>DateChoice;
		    		    
	    		    if(!((CenterChoice==11) && CentersData[CenterChoice-1].availability0fDays[DateChoice-1] == 0 && (DateChoice==1 || DateChoice==2 || DateChoice==3))){
		    	        cout<<"\n\t<<<Invalid Input, Please Try Again.>>>";
			        }
			        else break;
		        }
		        CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		        if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		        system ("CLS");
		        cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
		        cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		            <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", North Nazimabad."
		            <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
		        cout<<"\n----------------------------------------------------------------------------------------------------------";
		    
			break;		
//			}
//			break;
		case 7:
    		//while(1){
	    		cout<<"\nArea -----> Saddar"<<endl;
	    		cout<<"\nList of Centers Near You & their Availability : "<<endl;
//Holy Family Hospital
	    		cout<<"\n (12)    Holy Family Hospital"
	    		    <<"\n        Available Dates:";
	    		    if((CentersData[11].availability0fDays[0]) == 0){
	                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[11].availability0fDays[1] == 0){
	                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[11].availability0fDays[2] == 0){
	                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }     
                    if(CentersData[11].availability0fDays[0] == 1 && CentersData[11].availability0fDays[1] == 1 && CentersData[11].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					} 
					    
//Taj Medical Hospital                    
	    		cout<<"\n\n (13)    Taj Medical Hospital"
		    		<<"\n        Available Dates:";
		    		    if(CentersData[12].availability0fDays[0] == 0){
		                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[12].availability0fDays[1] == 0){
		                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[12].availability0fDays[2] == 0){
		                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    } 
	                    if(CentersData[12].availability0fDays[0] == 1 && CentersData[12].availability0fDays[1] == 1 && CentersData[12].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					    } 
						
// Al-Khaleej Tower						    
	    		cout<<"\n\n (14)    Al-Khaleej Tower"
	    		    <<"\n        Available Dates:";
		    		    if(CentersData[13].availability0fDays[0] == 0){
		                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[13].availability0fDays[1] == 0){
		                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[13].availability0fDays[2] == 0){
		                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }  
	                    if(CentersData[13].availability0fDays[0] == 1 && CentersData[13].availability0fDays[1] == 1 && CentersData[13].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					    } 
	                    
				while(1){		   
		    		cout<<"\n\nEnter Your Center Choice: ";
		    		cin>>CenterChoice;
		    		cout<<"Enter Your Preferred Date: ";
		    		cin>>DateChoice;
		    		    
	    		    if(!((CenterChoice==12 || CenterChoice==13 || CenterChoice==14)  && CentersData[CenterChoice-1].availability0fDays[DateChoice-1] == 0 && (DateChoice==1 || DateChoice==2 || DateChoice==3))){
		    	        cout<<"\n\t<<<Invalid Input, Please Try Again.>>>";
			        }
			        else break;
		        }
		        CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		        if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		        system ("CLS");
		        cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
		        cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		            <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Saddar."
		            <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
		        cout<<"\n----------------------------------------------------------------------------------------------------------";
		    
			break;	
//			}	
//			break;
			
			case 8:
    		//while(1){
	    		cout<<"\nArea -----> Clifton"<<endl;
	    		cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    		
//Ziauddin Hospital Karachi
	    		cout<<"\n (15)    Ziauddin Hospital Karachi"
	    		    <<"\n        Available Dates:";
	    		    if((CentersData[14].availability0fDays[0]) == 0){
	                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[14].availability0fDays[1] == 0){
	                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    }
					if(CentersData[14].availability0fDays[2] == 0){
	                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
                    } 
					if(CentersData[14].availability0fDays[0] == 1 && CentersData[14].availability0fDays[1] == 1 && CentersData[14].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					    }     
                     
//KPT Hospital                    
	    		cout<<"\n\n (16)    KPT Hospital"
		    		<<"\n        Available Dates:";
		    		    if(CentersData[15].availability0fDays[0] == 0){
		                    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[15].availability0fDays[1] == 0){
		                    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }
						if(CentersData[15].availability0fDays[2] == 0){
		                    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	                    }     
	                    if(CentersData[15].availability0fDays[0] == 1 && CentersData[15].availability0fDays[1] == 1 && CentersData[15].availability0fDays[2] == 1){
                    	cout<<"\n\n                        No Available Dates for the Next Three Days.";
					    } 
	                    
				while(1){		   
		    		cout<<"\n\nEnter Your Center Choice: ";
		    		cin>>CenterChoice;
		    		cout<<"Enter Your Preferred Date: ";
		    		cin>>DateChoice;
		    		    
	    		    if(!((CenterChoice==15 || CenterChoice==16)  && CentersData[CenterChoice-1].availability0fDays[DateChoice-1] == 0 && (DateChoice==1 || DateChoice==2 || DateChoice==3))){
		    	        cout<<"\n\t<<<Invalid Input, Please Try Again.>>>";
			        }
			        else break;
		        }
		        CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		        if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		        system ("CLS");
		        cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
		        cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		            <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Clifton."
		            <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
		        cout<<"\n----------------------------------------------------------------------------------------------------------";
		    
			break;		
//			}
//			break;
			
		default:
			cout<<"Error, Program Exiting.";
    }
   
   fflush(stdin);
   cin.get();
   
}
	
	return 0;
}
