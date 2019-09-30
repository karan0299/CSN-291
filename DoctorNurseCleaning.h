#include"Staff.h"
class Doctor:public Staff
{
	
		bool resident; //ask radhu
		string speciality;
	public:
		Doctor();
		void write_diagnosis(Patient P[],int Id)
		{
			string Description;
			cout<<"Enter Description :"<<endl
			cin>>Description;
			int n;
			cout<<"Enter no of Tests :"<<endl;
			cin>>n;
			cout<<"Enter Tests :"<<endl;
			string Tests[n];
			for(int i=0i<n;i++){
				cin>>Tests[i];
			}
			cout<<"Enter no of Medicines :"<<endl;
			cin>>n;
			cout<<"Enter Medicines :"<<endl;
			string Medicines[n];
			for(int i=0i<n;i++){
				cin>>Medicines[i];
			}
			double fees;
			cout<<"enter Fees : ";
			cin<<fees;
			P[Id].addDiagnosis(id,Description,Tests,Medicines,fees);
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
