from django.contrib import admin
from hospital.models.doctor import Doctor
from hospital.models.nurse import Nurse
from hospital.models.cleaning import Cleaning
from hospital.models.pharmacy import Pharmacy
from hospital.models.medicines import Medicine
from hospital.models.lab import Lab
from hospital.models.diagnosis import Diagnosis
from hospital.models.patient import Patient
from hospital.models.administrator import Administrator

# Register your models here.
admin.site.register(Doctor)
admin.site.register(Nurse)
admin.site.register(Cleaning)
admin.site.register(Medicine)
admin.site.register(Pharmacy)
admin.site.register(Lab)
admin.site.register(Diagnosis)
admin.site.register(Patient)
admin.site.register(Administrator)
