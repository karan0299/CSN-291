#include<string>
#include<iostream>
#include"Administration.h"
#include"PatientDiagnosis.h"
#include"DoctorNurseCleaning.h"
using namespace std;
class Director:public Administration
{
	
		char post[20];
		char password[40];
		bool isLoggedIn;
	public:
		Director():Administration()
	{
		strcpy(post,"");
		strcpy(password,"");
		isLoggedIn=false;
	}
		Director(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number,char Post[],char Password[]):Administration(Name,Gender,Date_of_birth,Address,Contact_number)
	{
		strcpy(post,Post);
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
	void patient_info(Patient P[],int id)
	{
		cout<<"Name:"<<P[id].getName();
		cout<<endl;
		cout<<"Gender:"<<P[id].getGender();
		cout<<endl;
		cout<<"Date of birth"<<P[id].getDate_of_birth();
		cout<<endl;
		cout<<"Address:"<<P[id].getAddress();
		cout<<endl;
		cout<<"Contact Number:"<<P[id].getContact_number();
		cout<<endl;
		cout<<"Blood group:"<<P[id].getBlood_group();
		cout<<endl;
		cout<<"Id"<<P[id].getId();
		cout<<endl;
		P[id].viewDiagnosis();
		cout<<endl;
		

	}
	void doctor_info(Doctor D[],int id)
		{
		cout<<"Name:"<<D[id].getName();
		cout<<endl;
		cout<<"Gender:"<<D[id].getGender();
		cout<<endl;
		cout<<"Date of birth"<<D[id].getDate_of_birth();
		cout<<endl;
		cout<<"Address:"<<D[id].getAddress();
		cout<<endl;
		cout<<"Contact Number:"<<D[id].getContact_number();
		cout<<endl;
		cout<<"Id"<<D[id].getId();
		cout<<endl;
		cout<<"Speciality:"<<D[id].getSpeciality();
		cout<<endl;
		cout<<"Salary:"<<D[id].getSalary();
		cout<<endl;
		}
	void nurse_info(Nurse N[],int id)
		{
		cout<<"Name:"<<N[id].getName();
		cout<<endl;
		cout<<"Gender:"<<N[id].getGender();
		cout<<endl;
		cout<<"Date of birth"<<N[id].getDate_of_birth();
		cout<<endl;
		cout<<"Address:"<<N[id].getAddress();
		cout<<endl;
		cout<<"Contact Number:"<<N[id].getContact_number();
		cout<<endl;
		cout<<"Id"<<N[id].getId();
		cout<<endl;
		cout<<"Salary:"<<N[id].getSalary();
		cout<<endl;
		}
		void cleaning_staff_info(Cleaning_staff C[],int id)
		{
		cout<<"Name:"<<C[id].getName();
		cout<<endl;
		cout<<"Gender:"<<C[id].getGender();
		cout<<endl;
		cout<<"Date of birth"<<C[id].getDate_of_birth();
		cout<<endl;
		cout<<"Address:"<<C[id].getAddress();
		cout<<endl;
		cout<<"Contact Number:"<<C[id].getContact_number();
		cout<<endl;
		cout<<"Id"<<C[id].getId();
		cout<<endl;
		cout<<"Salary:"<<C[id].getSalary();
		cout<<endl;
		}
		void pharmacy_info(Pharmacy P)
		{
		cout<<"Pharmacist Name:"<<P.getPharmacist_name();
		cout<<endl;
		cout<<"Pharmacist Salary:"<<P.getPharmacist_salary();
		cout<<endl;
		}
		void lab_info(Lab L)
		{
		cout<<"Lab assistant Name:"<<L.getLab_assistant_name();
		cout<<endl;
		cout<<"Lab assistant Salary:"<<L.getLab_assistant_salary();
		cout<<endl;
		}
		void cash_collection();
		template<class T>
		void change_salary(T t,int newSalary)
		{
			T.salary=newSalary;
		}
		template<class T>
		void remove_staff(T t,int Id)
		{
			T[Id].remove();
		}
		template<class T>
		void add_staff(T t, int n)
		{
			static int id;
			static double salary;
			static char name[30];
			static  char gender[10];
			static  char date_of_birth[10];
			static char address[100];
			static long contact_number;
			static char speciality[50];
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
			cout<<"Enter Salary:"<<endl;
			cin>>salary;
			static int id=getID(T);
			switch(n)
			{
				case 1:
				cout<<"Enter Speciality:"<<endl;
				cin>>speciality;
				T.setDoctorInfo();
				break;
				case 2:
				T.setNurseInfo();
				break;
				case 3:
				T.setCleaning_Staff();
				break;
				default();
			}


		}
};


