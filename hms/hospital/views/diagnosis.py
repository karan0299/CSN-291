from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.diagnosis_serializer import DiagnosisSerializer
from hospital.models.diagnosis import Diagnosis
from hospital.permissions.is_doctor import IsDoctor
from hospital.permissions.is_nurse import IsNurse
from hospital.permissions.is_receptionist import IsReceptionist


class DiagnosisViewSet(ModelViewSet):

    serializer_class = DiagnosisSerializer
    permission_classes = [IsAuthenticated, ]
    permission_classes_by_action = {
        'create': [IsDoctor, IsReceptionist],
        'get': [IsDoctor, IsNurse],
        'put': [IsDoctor, ],
        'delete': [IsDoctor, ]
    }

    def get_permissions(self):
        try:
            return [permission() for permission in self.permission_classes_by_action[self.action]]
        except KeyError:
            return [permission() for permission in self.permission_classes]

    def get_queryset(self):
        diagnosis = Diagnosis.objects.all().order_by('doctor')
        return diagnosis
