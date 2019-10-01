#include <string>
#include <iostream>
using namespace std;

class Medicine {
    public:
        string name;
        int stock;
        double cost;

        Medicine(){};
};

class Pharmacy {
    private : 
        string pharmacist_name;
        double pharmacist_salary;
        Medicine medicines[1000];
        int count;
        static int cash;
    public :  
        Pharmacy(){ count=0;}
        void setPharmacyInfo(string name, double salary){
    pharmacist_name.assign(name);
    pharmacist_salary = salary;
}

        string getPharmacist_name(){ return pharmacist_name;}
        double getPharmacist_salary(){ return pharmacist_salary;}
        int getPharmacyCash(){ return cash;}
        void setPharmacyCash(){ cash = 0;}
        void add_medicine(string name, int stock, double cost){
    for(int i =0;i<count;i++){
        if((medicines[i].name).compare(name)==0){
            medicines[i].stock+=stock;
            medicines[i].cost = cost;
            return;
        }
    }
    medicines[count].name = name;
    medicines[count].stock = stock;
    medicines[count].cost = cost;
    count++;
}
void sell_medicine(string name,int stock){
    for(int i=0;i<count;i++){
        if((medicines[i].name).compare(name)==0){
            medicines[i].stock-=stock;
            cash = cash + medicines[i].cost*stock;
        }
    }
}

};





class Lab {
    private:
        string lab_assistant_name;
        double lab_assistant_salary;
    public:
        Lab(){
           lab_assistant_salary=0;
           lab_assistant_name="";
        };
        void setLab_assistant_name(string name){ lab_assistant_name = name ;}
        void setLab_assistant_salary(double salary){ lab_assistant_salary = salary; }
        string getLab_assistant_name(){ return lab_assistant_name;}
        double getLab_assistant_salary(){ return lab_assistant_salary;}
      void perform_tests(string *test){
    for(int i=0;test[i].compare("")!=0;i++){
        cout<<"Test :"<<test[i]<<endl;
        cout<<"Enter result"<<endl;
        string result;
        cin>>result;
        test[i] = test[i] + "\n result :" + result;
    }
}

};










