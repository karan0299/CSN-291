#include<string>
#include<iostream>
#include"Administration.h"
using namespace std;
class Director:public Administration
{
	
		char post[20];
		char password[40];
		bool isLoggedIn;
	public:
		Director():Administration()
	{
		strcpy(password,"");
		isLoggedIn=false;
	}
		Director(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number,char Password[]):Administration(Name,Gender,Date_of_birth,Address,Contact_number)
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
			static char shift[20];
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
			static int id=findID(T);
			switch(n)
			{
				case 1:
				cout<<"Enter Speciality:"<<endl;
				cin>>speciality;
				add_doctor(name,gender,date_of_birth,address,contact_number,salary, speciality);
				break;
				case 2:
				add_nurse(name,gender,date_of_birth,address,contact_number,salary);
				break;
				case 3:
				cout<<"Enter Shift "<<endl;
				cin>>shift;
				add_cleaning_staff(name, gender, date_of_birth, address, contact_number, salary, shift);
				break;
				default();
			}

		}
};


