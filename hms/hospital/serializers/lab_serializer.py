from rest_framework.serializers import ModelSerializer
from hospital.models.lab import Lab


class LabSerializer(ModelSerializer):

    class Meta:
        model = Lab
        fields = '__all__'
