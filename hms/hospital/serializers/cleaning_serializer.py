from rest_framework.serializers import ModelSerializer
from hospital.models.cleaning import Cleaning


class CleaningSerializer(ModelSerializer):
    """

    """
    class Meta:
        model = Cleaning
        fields = '__all__'
