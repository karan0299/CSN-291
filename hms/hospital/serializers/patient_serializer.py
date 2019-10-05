from rest_framework.serializers import ModelSerializer
from hospital.serializers.diagnosis_serializer import DiagnosisSerializer
from hospital.models.patient import Patient


class PatientSerializer(ModelSerializer):
    diagnosis = DiagnosisSerializer()

    class Meta:
        model = Patient
        fields = '__all__'
