from rest_framework.serializers import ModelSerializer
from hospital.models.pharmacist import Pharmacist


class NurseSerializer(ModelSerializer):
    """

    """
    class Meta:
        model = Pharmacist
        fields = '__all__'
