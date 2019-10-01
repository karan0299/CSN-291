#include <string>
using namespace std;

class Staff
{

		int id;
		double salary;
		string name;
		string gender;
		string date_of_birth;
		string address;
		int contact_number;
public:
		Staff()
		{
			name.assign("");
			gender.assign("");
			date_of_birth.assign("");
			address.assign("");
		contact_number=0;
		salary=0;
		id=0;
		}
		Staff(char Name[],char Gender[],char Date_of_birth[],char Address[],long Contact_number,double Salary,int Id)
		{
		name.assign(Name);
			gender.assign(Gender);
			date_of_birth.assign(Date_of_birth);
			address.assign(Address);
		contact_number=Contact_number;
		salary=Salary;
		id=Id;
		}
		string getName(){ return name ;}
        string getGender(){ return gender;}
        string getDate_of_birth(){ return date_of_birth; }
        string getAddress(){ return address;}
       double getSalary()
	   {
		   return salary;
	   }
        int getId(){return id;}
        long getContact_number(){ return contact_number;}
	 
	 void setInfo(string Name,string Gender,string dob,string Address,long Number,int Id,double Salary)
{
    name.assign(Name);
    gender.assign(Gender);
    date_of_birth.assign(dob);
    address.assign(Address);
    contact_number = Number;
    id = Id;
	salary=Salary;
}
};
