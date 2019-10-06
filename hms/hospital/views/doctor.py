from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.doctor_serializer import DoctorSerializer
from hospital.models.doctor import Doctor
from hospital.permissions.is_director import IsDirector
from hospital.permissions.is_receptionist import IsReceptionist


class DoctorViewSet(ModelViewSet):
    """
    View for CRUD operations of doctor
    """

    serializer_class = DoctorSerializer
    permission_classes = [IsAuthenticated, ]
    permission_classes_by_action = {
        'create': [IsDirector, ],
        'get': [IsDirector, IsReceptionist],
        'put': [IsDirector, ],
        'delete': [IsDirector, ],
    }

    def get_permissions(self):
        try:
            return [permission() for permission in self.permission_classes_by_action[self.action]]
        except KeyError:
            return [permission() for permission in self.permission_classes]


def get_queryset(self):
        """

        :return:
        """
        doctor = Doctor.objects.all().order_by('speciality')
        return doctor
