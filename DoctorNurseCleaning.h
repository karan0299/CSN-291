#include"Staff.h"
#include<iostream>
using namespace std;
#include "PatientDiagnosis.h"

class Nurse:public Staff
{
	Nurse():Staff()
	{
	}
	Nurse(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number,double Salary,int Id):Staff(Name,Gender,Date_of_birth,Address,Contact_number,Salary,Id)
			{

	}
void patient_info(Patient P)
	{
		cout<<"Name:"<<P.getName();
		cout<<endl;
		cout<<"Gender:"<<P.getGender();
		cout<<endl;
		cout<<"Date of birth"<<P.getDate_of_birth();
		cout<<endl;
		cout<<"Address:"<<P.getAddress();
		cout<<endl;
		cout<<"Contact Number:"<<P.getContact_number();
		cout<<endl;
		cout<<"Blood group:"<<P.getBlood_group();
		cout<<endl;
		cout<<"Id"<<P.getId();
		cout<<endl;
		P.viewDiagnosis();
		cout<<endl;
		

	}
		
};


class Doctor:public Staff
{
	
	
		string speciality;
		string password;
		bool isLoggedIn;
	public:
		Doctor():Staff()
			{
		password.assign("");
		isLoggedIn=false;
	}
	Doctor(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number,double Salary,int Id,char Password[]):Staff(Name,Gender,Date_of_birth,Address,Contact_number,Salary,Id)
			{
		password.assign(Password);
		isLoggedIn=false;
	}
		void write_diagnosis(Patient P)
		{
			string Description;
			cout<<"Enter Description :"<<endl;
			cin>>Description;
			int n;
			cout<<"Enter no of Tests :"<<endl;
			cin>>n;
			cout<<"Enter Tests :"<<endl;
			string *Tests=new string[n];
			for(int i=0;i<n;i++){
				cin>>Tests[i];
			}
			cout<<"Enter no of Medicines :"<<endl;
			cin>>n;
			cout<<"Enter Medicines :"<<endl;
			string *Medicines=new string[n];
			for(int i=0;i<n;i++){
				cin>>Medicines[i];
			}
			double fees;
			cout<<"enter Fees : ";
			cin>>fees;
			P.add_Diagnosis(getId(),Description,Tests,Medicines,fees);
		}
		void patient_info(Patient P)
	{
		cout<<"Name:"<<P.getName();
		cout<<endl;
		cout<<"Gender:"<<P.getGender();
		cout<<endl;
		cout<<"Date of birth"<<P.getDate_of_birth();
		cout<<endl;
		cout<<"Address:"<<P.getAddress();
		cout<<endl;
		cout<<"Contact Number:"<<P.getContact_number();
		cout<<endl;
		cout<<"Blood group:"<<P.getBlood_group();
		cout<<endl;
		cout<<"Id"<<P.getId();
		cout<<endl;
		P.viewDiagnosis();
		cout<<endl;
		

	}
		
	void nurse_info(Nurse N)
		{
		cout<<"Name:"<<N.getName();
		cout<<endl;
		cout<<"Gender:"<<N.getGender();
		cout<<endl;
		cout<<"Date of birth"<<N.getDate_of_birth();
		cout<<endl;
		cout<<"Address:"<<N.getAddress();
		cout<<endl;
		cout<<"Contact Number:"<<N.getContact_number();
		cout<<endl;
		cout<<"Id"<<N.getId();
		cout<<endl;
		cout<<"Salary:"<<N.getSalary();
		cout<<endl;
		}
			void login(string Password)
	{
		if(password.compare(Password)==0)
			{
				isLoggedIn=true;
			}
	}
		string getSpeciality(){ return speciality;}
	
	
};




class Cleaning_staff:public Staff 
{
	string shift;
     public:
	 Cleaning_staff():Staff()
		{
			shift.assign("");
		}
		Cleaning_staff(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number,double Salary,int Id,char Shift[]):Staff(Name,Gender,Date_of_birth,Address,Contact_number,Salary,Id)
			{
	shift.assign(Shift);
	}
		string getShift()
		{
			return shift;
		}
		void setShift(string Shift)
		{
			shift.assign(Shift);
		}
};
