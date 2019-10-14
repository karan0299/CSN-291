from django.db import models
from hospital.models.medicines import Medicine
from hospital.models.pharmacist import Pharmacist


class Pharmacy(models.Model):
    """

    """
    pharmacist = models.OneToOneField(Pharmacist, related_name='pharmacist', on_delete=models.DO_NOTHING)
    medicines = models.ManyToManyField(Medicine, related_name='medicines')
    cash_collection = models.IntegerField()
