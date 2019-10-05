from rest_framework.serializers import ModelSerializer

from hospital.models.pharmacy import Pharmacy
from hospital.serializers.medicine_serializer import MedicineSerializer


class PharmacySerializer(ModelSerializer):
    medicines = MedicineSerializer()

    class Meta:
        model = Pharmacy
        fields = '__all__'
        depth = 1
