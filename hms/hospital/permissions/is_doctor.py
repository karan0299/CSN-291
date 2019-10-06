from rest_framework import permissions
from hospital.models.doctor import Doctor


class IsDoctor(permissions.BasePermission):

    def has_permission(self, request, view):
        doctor = Doctor.objects.filter(username=request.user.username)
        if len(doctor) == 0:
            return False
        return True
