from django.db import models
from hospital.models.staff import Staff


class Cleaning(Staff):
    """

    """
    cleaning_staff = models.OneToOneField(
        Staff,
        on_delete=models.CASCADE,
        parent_link=True
    )
    shift_start = models.TimeField()
    shift_end = models.TimeField()

    class Meta:
        default_related_name = 'cleaning'
