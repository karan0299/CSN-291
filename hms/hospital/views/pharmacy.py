from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated
from hospital.serializers.pharmacy_serializer import PharmacySerializer
from hospital.models.pharmacy import Pharmacy


class PharmacyViewSet(ModelViewSet):

    serializer_class = PharmacySerializer
    permission_classes = [IsAuthenticated, ]

    def get_queryset(self):
        pharmacy = Pharmacy.objects.all()
        return pharmacy
