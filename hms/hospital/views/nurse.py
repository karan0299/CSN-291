from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.nurse_serializer import NurseSerializer
from hospital.models.nurse import Nurse


class NurseViewSet(ModelViewSet):
    """
    View for CRUD operations of nurse
    """

    serializer_class = NurseSerializer
    permission_classes = [IsAuthenticated, ]
    # permission_classes_by_action = [
    #     'create': IsAuthenticated
    # ]

    def get_queryset(self):
        """

        :return:
        """
        nurse = Nurse.objects.all()
        return nurse
