from rest_framework import serializers

from hospital.models.administrator import Administrator


class AdministratorSerializer(serializers.ModelSerializer):

    class Meta:
        model = Administrator
        fields = '__all__'
        extra_kwargs = {
            'username': {'validators': []},
        }