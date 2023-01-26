#include "loginForm.h"


using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginScreen::loginForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr)
	{
		MessageBox::Show("Successfull Authentication of " + user->Firstname, "Program.cpp", MessageBoxButtons::OK);
	}
	else
	{
		MessageBox::Show("Authentication Cancelled", "Program.cpp", MessageBoxButtons::OK);
	}
}