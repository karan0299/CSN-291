from django.db import models


class Lab(models.Model):
    lab_assistant_name = models.CharField(
        max_length=30,
    )
    lab_assistant_salary = models.DecimalField(
        decimal_places=3,
        max_digits=7,
    )
