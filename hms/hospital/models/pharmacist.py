from django.db import models
from hospital.models.staff import Staff


class Pharmacist(Staff):
    """

    """
    pharmacist_staff = models.OneToOneField(
        Staff,
        on_delete=models.CASCADE,
        parent_link=True
    )

    class Meta:
        default_related_name = 'pharmacist'
