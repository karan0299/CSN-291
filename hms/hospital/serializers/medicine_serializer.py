from rest_framework.serializers import ModelSerializer

from hospital.models.medicines import Medicine


class MedicineSerializer(ModelSerializer):
    class Meta:
        model = Medicine
        fields = '__all__'
