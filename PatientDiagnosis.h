#include<string>
#include <iostream>
using namespace std;
class Diagnosis{
    public:
        int doctor_id;
      string description;
       string tests[1000];
       string medicines[1000];
       double fees;
        Diagnosis(){};
};
class Patient {
    private:
        string name;
        string gender;
        string date_of_birth;
        string address;
        long contact_number;
        string blood_group;
        int id;
        Diagnosis diagnosis;
    public:
        Patient(){ id=-1;};
        string getName(){ return name ;}
        string getGender(){ return gender;}
        string getDate_of_birth(){ return date_of_birth; }
        string getAddress(){ return address;}
        string getBlood_group(){ return blood_group;}
        int getId(){return id;}
        long getContact_number(){ return contact_number;}
        string *getDiagnosisTests()
        {
            return diagnosis.tests;
        }
        void setPatientInfo(string Name,string Gender,string dob,string Address,string bg,long Number,int Id){
            name.assign(Name);
            gender.assign(Gender);
            date_of_birth.assign(dob);
            address.assign(Address);
            blood_group.assign(bg);
            contact_number = Number;
            id = Id;
        }


        void add_Diagnosis(int Id,string Description, string Tests[],string Medicines[],double fees){
            diagnosis.doctor_id =  Id;
            diagnosis.description = Description;
            for(int i=0;Tests[i].compare("")!=0;i++){
                diagnosis.tests[i].assign(Tests[i]);
            }
            for(int i=0;Medicines[i].compare("")!=0;i++){
                diagnosis.medicines[i].assign(Medicines[i]);
            }
            diagnosis.fees = fees;
            
        }

        void viewDiagnosis(){
            cout<<"Doctor_id : "<<diagnosis.doctor_id<<endl;
            cout<<"Description :"<<diagnosis.description<<endl;    
            cout<<"Tests :"<<endl;
            for(int i=0;diagnosis.tests[i].compare("")!=0;i++){
                cout<<"\t"<<i<<". "<<diagnosis.tests[i]<<endl;
            }
            cout<<"Medicines"<<endl;
            for(int i=0;diagnosis.medicines[i].compare("")!=0;i++){
                cout<<"\t"<<i<<". "<<diagnosis.medicines[i]<<endl;
            }
            cout<<"Fees : "<<diagnosis.fees<<endl;  
        }
};





