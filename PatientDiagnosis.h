class Patient {
    private:
        string name;
        string gender;
        string date_of_birth;
        string adress;
        int contact_number;
        string blood_group;
        int id;
        Diagnosis diagnosis
    public:
        Patient();
        void add_Diagnosis();
};



class Diagnosis{
    private:
        int doctor_id;
-       string description;
-       string tests[];
-       string medicines[];
-       double fees;
    public: 
        Diagnosis();
        void pay_fees();
}

Diagnosis::Diagnosis(){

}

void Diagnosis:: pay_fees(){

}



Patient::Patient(){

}

void Patient::add_Diagnosis(){

}