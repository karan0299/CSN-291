from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.cleaning_serializer import CleaningSerializer
from hospital.models.cleaning import Cleaning


class CleaningStaffViewSet(ModelViewSet):

    serializer_class = CleaningSerializer
    permission_classes = [IsAuthenticated, ]

    def get_queryset(self):
        """

        :return:
        """
        cleaning_staff = Cleaning.objects.all()
        return cleaning_staff