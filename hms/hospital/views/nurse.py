from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.nurse_serializer import NurseSerializer
from hospital.models.nurse import Nurse
from hospital.permissions.is_receptionist import IsReceptionist
from hospital.permissions.is_director import IsDirector
from hospital.permissions.is_doctor import IsDoctor


class NurseViewSet(ModelViewSet):
    """
    View for CRUD operations of nurse
    """

    serializer_class = NurseSerializer
    permission_classes = [IsAuthenticated, ]
    permission_classes_by_action = {
        'create': [IsDirector, ],
        'get': [IsDirector, IsReceptionist, IsDoctor],
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
        nurse = Nurse.objects.all()
        return nurse
