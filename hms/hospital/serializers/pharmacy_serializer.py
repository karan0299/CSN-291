from rest_framework import serializers

from hospital.models.pharmacy import Pharmacy
from hospital.models.medicines import Medicine


class PharmacySerializer(serializers.ModelSerializer):
    medicines = serializers.PrimaryKeyRelatedField(
        queryset=Medicine.objects.all(),
        many=True,
    )

    class Meta:
        model = Pharmacy
        fields = ['pharmacist_name', 'pharmacist_salary', 'cash_collection', 'medicines']
        depth = 1
