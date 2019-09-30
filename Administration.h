#include<string.h>
class Administration
{
	
		char name[30];
		char gender[10];
		char date_of_birth[10];
		char address[100];
		long contact_number;
	public:
		Administration()
		{}
		Administration(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number);	
		// void login();
		void patient_info();
		void doctor_info();
		void nurse_info();
		void cleaning_staff_info();
		void pharmacy_info();
		void lab_info();
		void cash_collection();
};
Administration::Administration()
{	name[0]='\0';
			gender[0]='\0';
			date_of_birth[0]='\0';
			address[0]='\0';
		contact_number=0;
}
Administration::Administration(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number)
		{
			strcpy(name,Name);
			strcpy(gender,Gender);
			strcpy(date_of_birth,Date_of_birth);
			strcpy(address,Address);
			contact_number=Contact_number;
		}
//  void Administration::login()
//  {}
 void Administration::patient_info()
 {}
 void Administration::doctor_info()
 {}
 void Administration::nurse_info()
 {}
 void Administration::cleaning_staff_info()
 {}
 void Administration::pharmacy_info()
 {}
 void Administration::lab_info()
 {}
 void Administration::cash_collection()
 {}