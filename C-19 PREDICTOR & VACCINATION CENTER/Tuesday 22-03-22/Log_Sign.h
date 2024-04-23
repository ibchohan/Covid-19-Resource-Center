#ifndef LOG_SIGN_H
#define LOG_SIGN_H

#include <string>
using namespace std;

class Log_Sign
{
	private:
		string UserName;
		string Password;
		string User;
		string Pass;
	public:
		Log_Sign();		// DEFAULT CONSTRUCTOR
	// EXTRA FUNCTIONS
	void Options();	// choice: Either Login or Signin
	void Login();
	void Signup();
};

#endif
