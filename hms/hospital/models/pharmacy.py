from django.db import models
from hospital.models.medicines import Medicine


class Pharmacy(models.Model):
    """

    """
    pharmacist_name = models.CharField(
        max_length=20,
    )
    pharmacist_salary = models.DecimalField(
        decimal_places=3,
        max_digits=10,
    )
    medicines = models.ManyToManyField(Medicine, related_name='medicines')
    cash_collection = models.IntegerField()
