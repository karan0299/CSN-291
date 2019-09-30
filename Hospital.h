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


};