from rest_framework.serializers import ModelSerializer
from hospital.models.nurse import Nurse


class NurseSerializer(ModelSerializer):
    """

    """
    class Meta:
        model = Nurse
        fields = '__all__'
