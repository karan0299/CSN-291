#include<iostream>
using namespace std;
class Receptionist:public Administration
{
	char password[40];
	bool isLoggedIn;
	public:
	Receptionist():Administration()
	{
		strcpy(password,"");
		isLoggedIn=false;
	}
	Receptionist(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number,char Post[],char Password[]):Administration(Name,Gender,Date_of_birth,Address,Contact_number)
	{
		strcpy(password,Password);
		isLoggedIn=false;
	}
	void login(char Password[])
	{
		if(strcmp(password,Password)==0)
			{
				isLoggedIn=true;
			}
	}
	void cash_collection(Pharmacy P)
	{
		setCash(P.getPharmacyCash());
		P.setPharmacyCash();
	}
	void add_patient(Patient P[])
	{
		int ID=findID(P);
			static char name[30];
			static  char gender[10];
			static  char date_of_birth[10];
			static char address[100];
			static long contact_number;
			static string blood_group;
			cout<<"Enter Name:"<<endl;
			cin>>name;
			cout<<"Enter Gender:"<<endl;
			cin>>gender;
			cout<<"Enter Date of birth"<<endl;
			cin>>date_of_birth;
			cout<<"Enter Address:"<<endl;
			cin>>address;
			cout<<"Enter Contact Number:"<<endl;
			cin>>contact_number;
			cout<<"Enter Blood group:"<<endl;
			cin>>blood_group;
			static int id=findID(P);
		
		
				P[id].setPatientInfo(name,gender,date_of_birth,address,blood_group,contact_number,id);
			

	}
};
