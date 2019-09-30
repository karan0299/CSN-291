#include<string.h>
#include"DoctorNurseCleaning.h"
#include"PharmacyMedicineLab.h"
#include"PatientDiagnosis.h"
class Administration
{
	
		char name[30];
		char gender[10];
		char date_of_birth[10];
		char address[100];
		static int total_cash;
		long contact_number;
	public:
		Administration()
		{}
		Administration(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number);	
		// void login();
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
		cout<<"Shift:"<<C[id].getShift();
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
		int getCashInfo()
		{
			return total_cash;
		}
		void setCash(int addCash)
		{
			total_cash+=addCash;
		}
		template<class T>
		int findID(T t)
		{
			static int i=0;
			while(t[i].getId()!=-1)
			{
				i++;
			}
			return i;
		}
};
Administration::Administration()
{		strcpy(name,"");
			strcpy(gender,"");
			strcpy(date_of_birth,"");
			strcpy(address,"");
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
 