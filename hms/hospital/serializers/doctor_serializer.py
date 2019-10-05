from rest_framework import serializers

from hospital.models.doctor import Doctor


class DoctorSerializer(serializers.ModelSerializer):
    """

    """

    class Meta:
        model = Doctor
        fields = "__all__"
