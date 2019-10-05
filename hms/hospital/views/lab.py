from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.lab_serializer import LabSerializer
from hospital.models.lab import Lab


class LabViewSet(ModelViewSet):

    serializer_class = LabSerializer
    permission_classes = [IsAuthenticated, ]

    def get_queryset(self):
        lab = Lab.objects.all()
        return lab
