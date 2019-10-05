from rest_framework.serializers import ModelSerializer
from hospital.models.diagnosis import Diagnosis
from hospital.serializers.doctor_serializer import DoctorSerializer
from hospital.serializers.medicine_serializer import MedicineSerializer


class DiagnosisSerializer(ModelSerializer):
    doctor = DoctorSerializer()
    medicines = MedicineSerializer()

    class Meta:
        model = Diagnosis
        fields = '__all__'
