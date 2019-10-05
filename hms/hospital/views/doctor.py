from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.doctor_serializer import DoctorSerializer
from hospital.models.doctor import Doctor


class DoctorViewSet(ModelViewSet):
    """
    View for CRUD operations of doctor
    """

    serializer_class = DoctorSerializer
    permission_classes = [IsAuthenticated, ]
    # permission_classes_by_action = [
    #     'create': IsAuthenticated
    # ]

    def get_queryset(self):
        """

        :return:
        """
        doctor = Doctor.objects.all().order_by('speciality')
        return doctor
