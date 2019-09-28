class Staff
{
	private:
		int id;
		double salary;
		char name[];
		Gender gender;
		DateTimeField date_of_birth;
		char address[];
		int contact_number;

		Staff();
};
Staff::Staff()
{}