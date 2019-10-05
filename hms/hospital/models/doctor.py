from django.db import models
from hospital.models.staff import Staff


class Doctor(Staff):
    """

    """
    doctor_staff = models.OneToOneField(
        Staff,
        on_delete=models.CASCADE,
        parent_link=True
    )
    speciality = models.CharField(
        max_length=20,
    )

    class Meta:
        default_related_name = 'doctor'
