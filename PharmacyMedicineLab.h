class Pharmacy {
    public : 
        string pharmacist_name;
        double pharmacist_salary;

        void add_medicine();
        void sell_medicine();
};



class Medicine {
    public:
        string name;
        int stock;
        double cost;

        Medicine();
};


class Lab{
    public:
        string lab_assistant_name;
        lab_assistant_salary;
        Medicine medicine;

        Lab();
        void perform_tests();
};

Lab::Lab(){

}

void Lab::perform_tests(){

}


Medicine :: Medicine(){

}


Pharmacy::Pharmacy {

}

void Pharmacy::add_medicine(){

}

void Pharmacy::sell_medicine(){

}




