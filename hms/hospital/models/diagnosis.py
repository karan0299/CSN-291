from django.db import models

from hospital.models.doctor import Doctor
from hospital.models.medicines import Medicine


class Diagnosis(models.Model):
    doctor = models.OneToOneField(Doctor, related_name='doctor', on_delete=models.CASCADE)
    description = models.TextField()
    tests = models.TextField()
    medicines = models.ManyToManyField(Medicine, related_name='medicines_prescribed')
    fees = models.DecimalField(
        decimal_places=3,
        max_digits=10,
    )
