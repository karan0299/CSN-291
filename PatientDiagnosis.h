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
        void add_Diagnosis();
        void setPatientInfo(string Name,string Gender,string dob,string Address,string bg,long Number,int Id);
        string getName(){ return name ;}
        string getGender(){ return gender;}
        string getdate_of_birth(){ return date_of_birth; }
        string getAddress(){ return address;}
        string getBlood_group(){ return date_of_birth;}
        long getcontact_number(){ return contact_number;}
        void viewDiagnosis();
};



class Diagnosis{
    public:
        int doctor_id;
-       string description;
-       string tests[1000];
-       string medicines[1000];
-       double fees;
        Diagnosis(){};
}
]
void Patient::setPatientInfo(string Name,string Gender,string dob,string Address,string bg,long Number,int Id){
    name.assign(Name);
    gender.assign(Gender);
    date_of_birth.assign(dob);
    address.assign(Address);
    blood_group.assign(bg);
    contact_number = Number;
    id = Id;
}


void Patient::add_Diagnosis(int Id,string Description, string Tests[],string Medicines[],double fees){
    d.doctor_id =  Id;
    d.description = Description;
    for(int i=0;Tests[i].compare(""!=0);i++){
        tests[i].assign(Tests[i]);
    }
    for(int i=0;Medicines[i].compare(""!=0);i++){
        medicines[i].assign(Medicines[i]);
    }
    d.fees = fees
    
}

void Patient::viewDiagnosis(){
    cout<<"Doctor_id : "<<d.doctor_id<<endl;
    cout<<"Description :"<<d.description<<endl;    
    cout<<"Tests :"<<<<endl;
    for(int i=0;tests[i].compare(""!=0);i++){
        cout<<"\t"<<i<<". "<<tests[i]<<endl;
    }
    cout<<"Medicines"<<<<endl;
    for(for i=0;medicines[i].compare("")!=0;i++){
        cout<<"\t"<<i<<". "<<medicines[i]<<endl;
    }
    cout<<"Fees : "<<d.fees<<endl;  
}