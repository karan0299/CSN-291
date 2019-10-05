from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.medicine_serializer import MedicineSerializer
from hospital.models.medicines import Medicine


class MedicineViewSet(ModelViewSet):

    serializer_class = MedicineSerializer
    permission_classes = [IsAuthenticated, ]

    def get_queryset(self):
        medicines = Medicine.objects.all()
        return medicines
