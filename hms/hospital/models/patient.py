from django.db import models
from hospital.models.diagnosis import Diagnosis


class Patient(models.Model):
    name = models.CharField(
        max_length=30,
    )
    gender = models.IntegerField(
        choices=((1, "Male"),
                 (2, "Female"),
                 (3, "Other")),
    )
    date_of_birth = models.DateField()
    address = models.CharField(
        max_length=100,
    )
    contact_number = models.IntegerField()
    blood_group = models.CharField(
        max_length=3,
    )
    diagnosis = models.ManyToManyField(Diagnosis, related_name='diagnosis')
