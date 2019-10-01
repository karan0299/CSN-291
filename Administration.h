#include"DoctorNurseCleaning.h"
#include"PharmacyMedicineLab.h"
#include <cstring>
class Administration
{
	
		char name[30];
		char gender[10];
		char date_of_birth[10];
		char address[100];
		static int total_cash;
		long contact_number;
	public:
		Administration();
		Administration(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number);	
		// void login();
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
		void doctor_info(Doctor D)
		{
		cout<<"Name:"<<D.getName();
		cout<<endl;
		cout<<"Gender:"<<D.getGender();
		cout<<endl;
		cout<<"Date of birth"<<D.getDate_of_birth();
		cout<<endl;
		cout<<"Address:"<<D.getAddress();
		cout<<endl;
		cout<<"Contact Number:"<<D.getContact_number();
		cout<<endl;
		cout<<"Id"<<D.getId();
		cout<<endl;
		cout<<"Speciality:"<<D.getSpeciality();
		cout<<endl;
		cout<<"Salary:"<<D.getSalary();
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
		void cleaning_staff_info(Cleaning_staff C)
		{
		cout<<"Name:"<<C.getName();
		cout<<endl;
		cout<<"Gender:"<<C.getGender();
		cout<<endl;
		cout<<"Date of birth"<<C.getDate_of_birth();
		cout<<endl;
		cout<<"Address:"<<C.getAddress();
		cout<<endl;
		cout<<"Contact Number:"<<C.getContact_number();
		cout<<endl;
		cout<<"Id"<<C.getId();
		cout<<endl;
		cout<<"Salary:"<<C.getSalary();
		cout<<endl;
		cout<<"Shift:"<<C.getShift();
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
 