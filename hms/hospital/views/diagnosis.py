from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.diagnosis_serializer import DiagnosisSerializer
from hospital.models.diagnosis import Diagnosis


class DiagnosisViewSet(ModelViewSet):

    serializer_class = DiagnosisSerializer
    permission_classes = [IsAuthenticated, ]
