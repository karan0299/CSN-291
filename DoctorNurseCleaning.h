#include"Staff.h"
class Doctor:public Staff
{
	
		bool resident; //ask radhu
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
		void write_diagnosis()
		{

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
			void login(string Password)
	{
		if(password.compare(Password)==0)
			{
				isLoggedIn=true;
			}
	}
		string getSpeciality(){ return speciality;}
	
	
};


class Nurse:public Staff
{
	Nurse():Staff()
	{
	}
	Nurse(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number,double Salary,int Id):Staff(Name,Gender,Date_of_birth,Address,Contact_number,Salary,Id)
			{

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
		string setShift(string Shift)
		{
			shift.assign(Shift);
		}
};
