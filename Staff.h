class Staff
{

		int id;
		double salary;
		char name[30];
		string gender;
		string date_of_birth;
		char address[100];
		int contact_number;
public:
		Staff()
		{

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
};
