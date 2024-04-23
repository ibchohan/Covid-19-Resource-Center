#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <fstream>

// HEADER FILE :: Log_Sign
#include "Log_Sign.h"

Log_Sign::Log_Sign(){	}	// DEFAULT CONSTRUCTOR


	// OPTIONS FUNCTION
void Log_Sign::Options(){	
	
    char option;
    
	cout << "Choose From The Following: " << endl << endl;
	cout << "A) Login" << endl;
	cout << "B) Signup" << endl;
	cout << "C) Exit" << endl;
    cin>>option;

    switch (option){
		case 'A':
			case 'a':{
				Login();
	            break;
		}
		case 'B':
			case 'b':{
	        	Signup();
	        	Login();
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
}	// end of "OPTIONS Func."


	// LOGIN FUNCTION
void Log_Sign::Login(){

    int count=0;

    x:
    cout << "Enter User Name: " << endl;
    cin>>UserName;

    cout << "Enter User Password: " << endl;
    cin>>Password;

    ifstream myfile("userData.txt");

    while(myfile>>User>>Pass) {
        if (User==UserName && Pass==Password) {
            count=1;
        }
    }
    myfile.close();
    if (count==1) {
        cout << "LOGIN APPROVED" << endl;
    } else {
        cout << "Invalid Input!!\n  Try Again." << endl;
        goto x;
    }
}	// end of "LOGIN Func."


	// SIGNUP FUNCTION
void Log_Sign::Signup() {

    cout << "Enter User Name: " << endl;
    cin>>UserName;

    cout << "Enter User Password: " << endl;
    cin>>Password;

    ofstream file("userData.txt",ios::app);

    file<<UserName<<" "<<Password<<endl;

    file.close();

    cout<<"Registration Successful" << endl;
    
}	// end of "SIGNUP Func."

