from django.db import models


class Medicine(models.Model):
    name = models.CharField(
        max_length=30,
    )
    stock = models.IntegerField()
    cost = models.DecimalField(
        decimal_places=3,
        max_digits=10,
    )