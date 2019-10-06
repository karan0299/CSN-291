from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.patient_serializer import PatientSerializer
from hospital.models.patient import Patient
from hospital.permissions.is_doctor import IsDoctor
from hospital.permissions.is_nurse import IsNurse
from hospital.permissions.is_director import IsDirector
from hospital.permissions.is_receptionist import IsReceptionist


class PatientViewSet(ModelViewSet):

    serializer_class = PatientSerializer
    permission_classes = [IsAuthenticated, ]

    permission_classes_by_action = {
        'create': [IsReceptionist, ],
        'get': [IsDirector, IsReceptionist, IsDoctor, IsNurse],
        'put': [IsDoctor, ],
    }

    def get_permissions(self):
        try:
            return [permission() for permission in self.permission_classes_by_action[self.action]]
        except KeyError:
            return [permission() for permission in self.permission_classes]

    def get_queryset(self):
        patients = Patient.objects.all()
        return patients
