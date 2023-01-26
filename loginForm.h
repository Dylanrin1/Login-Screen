#pragma once
#include "User.h"


namespace LoginScreen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Llogin;
	protected:

	private: System::Windows::Forms::Label^ LEmail;

	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ LPassword;

	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ NextButton;

	private: System::Windows::Forms::Button^ BackButton;
	private: System::Windows::Forms::Label^ LFirstname;
	private: System::Windows::Forms::Label^ LLastname;



	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::TextBox^ tbLastname;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Llogin = (gcnew System::Windows::Forms::Label());
			this->LEmail = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->LPassword = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->NextButton = (gcnew System::Windows::Forms::Button());
			this->BackButton = (gcnew System::Windows::Forms::Button());
			this->LFirstname = (gcnew System::Windows::Forms::Label());
			this->LLastname = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->tbLastname = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Llogin
			// 
			this->Llogin->Location = System::Drawing::Point(48, 29);
			this->Llogin->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Llogin->Name = L"Llogin";
			this->Llogin->Size = System::Drawing::Size(802, 80);
			this->Llogin->TabIndex = 0;
			this->Llogin->Text = L"Login";
			this->Llogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Llogin->Click += gcnew System::EventHandler(this, &loginForm::label1_Click);
			// 
			// LEmail
			// 
			this->LEmail->AutoSize = true;
			this->LEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LEmail->Location = System::Drawing::Point(5, 236);
			this->LEmail->Name = L"LEmail";
			this->LEmail->Size = System::Drawing::Size(98, 38);
			this->LEmail->TabIndex = 1;
			this->LEmail->Text = L"Email";
			this->LEmail->Click += gcnew System::EventHandler(this, &loginForm::label2_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(213, 223);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(563, 56);
			this->tbEmail->TabIndex = 2;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &loginForm::tbEmail_TextChanged);
			// 
			// LPassword
			// 
			this->LPassword->AutoSize = true;
			this->LPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LPassword->Location = System::Drawing::Point(5, 298);
			this->LPassword->Name = L"LPassword";
			this->LPassword->Size = System::Drawing::Size(162, 38);
			this->LPassword->TabIndex = 3;
			this->LPassword->Text = L"Password";
			this->LPassword->Click += gcnew System::EventHandler(this, &loginForm::label3_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(213, 285);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(563, 56);
			this->tbPassword->TabIndex = 4;
			// 
			// NextButton
			// 
			this->NextButton->Location = System::Drawing::Point(719, 357);
			this->NextButton->Name = L"NextButton";
			this->NextButton->Size = System::Drawing::Size(174, 60);
			this->NextButton->TabIndex = 5;
			this->NextButton->Text = L"Next";
			this->NextButton->UseVisualStyleBackColor = true;
			this->NextButton->Click += gcnew System::EventHandler(this, &loginForm::NextButton_Click);
			// 
			// BackButton
			// 
			this->BackButton->Location = System::Drawing::Point(0, 357);
			this->BackButton->Name = L"BackButton";
			this->BackButton->Size = System::Drawing::Size(150, 60);
			this->BackButton->TabIndex = 6;
			this->BackButton->Text = L"back";
			this->BackButton->UseVisualStyleBackColor = true;
			this->BackButton->Click += gcnew System::EventHandler(this, &loginForm::button2_Click);
			// 
			// LFirstname
			// 
			this->LFirstname->AutoSize = true;
			this->LFirstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LFirstname->Location = System::Drawing::Point(5, 109);
			this->LFirstname->Name = L"LFirstname";
			this->LFirstname->Size = System::Drawing::Size(177, 38);
			this->LFirstname->TabIndex = 8;
			this->LFirstname->Text = L"First Name";
			this->LFirstname->Click += gcnew System::EventHandler(this, &loginForm::label5_Click);
			// 
			// LLastname
			// 
			this->LLastname->AutoSize = true;
			this->LLastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLastname->Location = System::Drawing::Point(5, 171);
			this->LLastname->Name = L"LLastname";
			this->LLastname->Size = System::Drawing::Size(175, 38);
			this->LLastname->TabIndex = 9;
			this->LLastname->Text = L"Last Name";
			this->LLastname->Click += gcnew System::EventHandler(this, &loginForm::label6_Click);
			// 
			// tbFirstName
			// 
			this->tbFirstName->Location = System::Drawing::Point(213, 96);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(563, 56);
			this->tbFirstName->TabIndex = 10;
			this->tbFirstName->TextChanged += gcnew System::EventHandler(this, &loginForm::tbFirstName_TextChanged);
			// 
			// tbLastname
			// 
			this->tbLastname->Location = System::Drawing::Point(213, 158);
			this->tbLastname->Name = L"tbLastname";
			this->tbLastname->Size = System::Drawing::Size(563, 56);
			this->tbLastname->TabIndex = 11;
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(25, 51);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 419);
			this->Controls->Add(this->tbLastname);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->LLastname);
			this->Controls->Add(this->LFirstname);
			this->Controls->Add(this->BackButton);
			this->Controls->Add(this->NextButton);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->LPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->LEmail);
			this->Controls->Add(this->Llogin);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(8, 10, 8, 10);
			this->Name = L"loginForm";
			this->Text = L"login Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tbEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}

public: User^ user = nullptr;

private: System::Void NextButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tbEmail->Text;
	String^ password = this->tbPassword->Text;
	String^ Firstname = this->tbFirstName->Text;
	String^ Lastname = this->tbLastname->Text;

	if (Firstname->Length == 0 || Lastname->Length == 0 || email->Length == 0 || password->Length == 0)
	{
		MessageBox::Show("Please enter the missing data", "Firstname/LastName/Email/Password", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=Login;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM users WHERE email = @email AND password=@pwd;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);


		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->Firstname = reader->GetString(1);
			user->Lastname = reader->GetString(2);
			user->Email = reader->GetString(3);
			user->Password = reader->GetString(4);
			this->Close();
		}
		else
		{
			MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
		}

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to database","Database Connection Error", MessageBoxButtons::OK);
	}
	}
private: System::Void tbFirstName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}
