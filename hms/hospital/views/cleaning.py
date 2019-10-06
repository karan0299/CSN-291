from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.cleaning_serializer import CleaningSerializer
from hospital.models.cleaning import Cleaning
from hospital.permissions.is_director import IsDirector
from hospital.permissions.is_receptionist import IsReceptionist


class CleaningStaffViewSet(ModelViewSet):

    serializer_class = CleaningSerializer
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
        cleaning_staff = Cleaning.objects.all()
        return cleaning_staff
