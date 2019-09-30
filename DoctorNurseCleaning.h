#include"Staff.h"
class Doctor:public Staff
{
	
		bool resident; //ask radhu
		string speciality;
	public:
		Doctor();
		void write_diagnosis()
		{

		}
		void nurse_info()
		{

		}
		void patient_info()
		{

		}
		void login()
		{

		}
		string getSpeciality(){ return speciality;}
	
	
};


class Nurse:public Staff
{
	Nurse()
	{

	}
	void patient_info()
	{

	}
};


class Cleaning_staff:public Staff 
{
     public:
	 Cleaning_staff()
		{

		}
};
