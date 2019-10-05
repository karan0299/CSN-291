from rest_framework.viewsets import ModelViewSet
from rest_framework.permissions import IsAuthenticated, IsAdminUser
from hospital.serializers.administrator_serializer import AdministratorSerializer
from hospital.models.administrator import Administrator

class AdministratorViewSet(ModelViewSet):

    serializer_class = AdministratorSerializer
    permission_classes = [IsAuthenticated, IsAdminUser, ]

    def get_queryset(self):
        administrators = Administrator.objects.all()
        return administrators
