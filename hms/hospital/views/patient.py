from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.patient_serializer import PatientSerializer
from hospital.models.patient import Patient


class PatientViewSet(ModelViewSet):

    serializer_class = PatientSerializer
    permission_classes = [IsAuthenticated, ]

    def get_queryset(self):
        patients = Patient.objects.all()
        return patients
