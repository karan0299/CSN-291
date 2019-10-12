from rest_framework import permissions
from hospital.models.administrator import Administrator


class IsReceptionist(permissions.BasePermission):

    def has_permission(self, request, view):
        administrator = Administrator.objects.filter(user=request.user)
        if len(administrator) == 0:
            return False
        return administrator[0].role == 2
