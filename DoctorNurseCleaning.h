class Doctor::public Staff
{
	private:
		bool resident; //ask radhu
		char speciality[];

		Doctor();
		void write_diagnosis();
		void nurse_info();
		void patient_info();
		void login();
};
void Doctor::write_diagnosis();
{}
void Doctor::nurse_info();
{}
void Doctor::patient_info();
{}
void Doctor::login();
{}


class Nurse::public Staff
{
	Nurse();
	void patient_info();
};
Nurse::Nurse()
{}
void Nurse::patient_info()
{}


class Cleaning_staff::public Staff {
    private:
        string shift;
    public:
        Cleaning_staff();
}
Cleaning_staff::Cleaning_staff()
{}