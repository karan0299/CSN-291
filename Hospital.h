#include"Administration.h"
#include"Director.h"
#include"DoctorNurseCleaning.h"
#include"PatientDiagnosis.h"
#include"PharmacyMedicineLab.h"
#include"Receptionist.h"
#include"Staff.h"
class Hospital
{
static char name[50];
static char address[100];
static long contact_no;

Director director;
Patient patient[1000];
Pharmacy pharmacy;
Receptionist receptionist;
Doctor doctor[100];
Nurse nurse[500];
Cleaning_staff cleaning_staff[500];
Lab lab;

int doc_count;
int cleaning_staff_count;
int patient_count;
int nurse_count;

static int doc_id;
static int nurse_id;
static int cleaning_staff_id;
static int patient_id;

public static add_doctor(char name[],char gender[],
	char date_of_birth[],char address[],long contact_number,
	double salary,char speciality[])
{
	doc_count++;
	doc_id++;
	Doctor doc = new Doctor();
	doc.set_info(name,gender,date_of_birth,address,contact_number, doc_id,salary, speciality);
	doctor[doc_count-1] = doc;
}

public static add_nurse(char name[],char gender[],
	char date_of_birth[],char address[],long contact_number,
	double salary)
{
	nurse_count++;
	nurse_id++;
	Nurse nurse_dummy = new Nurse();
	nurse_dummy.setInfo(name,gender,date_of_birth,address,contact_number, nurse_id,salary);
	nurse[nurse_count--] = nurse_dummy;
}


public static add_cleaning_staff(char name[],char gender[],
	char date_of_birth[],char address[],long contact_number,
	double salary, char shift[])
{
	cleaning_staff_count++;
	cleaning_staff_id++;
	Cleaning_staff cstaff = new Cleaning_staff();
	cstaff.setInfo(name,gender,date_of_birth,address,contact_number, cleaning_staff_id,salary);
	cstaff.setShift(shift);
	cleaning_staff[cleaning_staff_count-1] = cstaff;
}


public static add_new_patient(char name[],char gender[],
	char date_of_birth[],char address[], string blood_group,long contact_number)
{
	patient_id++;
	patient_count++;
	Patient p = new Patient();
	p.setPatientInfo(name,gender,date_of_birth,address,blood_group,contact_number, patient_id);
	patient[patient_count-1] = p;
}

};