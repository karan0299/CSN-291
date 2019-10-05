from django.db import models
from django.contrib.auth.models import User


class Administrator(models.Model):
    """

    """
    user = models.OneToOneField(User, related_name='director', on_delete=models.CASCADE)
    first_name = models.CharField(
        max_length=20,
    )
    last_name = models.CharField(
        max_length=20,
    )
    salary = models.DecimalField(
        decimal_places=3,
        max_digits=10,
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
    total_cash = models.DecimalField(
        decimal_places=3,
        max_digits=15,
    )
    role = models.IntegerField(
        choices=(
            (1, "Director"),
            (2, "Receptionist")
        )
    )
