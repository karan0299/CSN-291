from rest_framework import permissions
from hospital.models.nurse import Nurse


class IsNurse(permissions.BasePermission):

    def has_permission(self, request, view):
        nurse = Nurse.objects.filter(username=request.user.username)
        if len(nurse) == 0:
            return False
        return True
