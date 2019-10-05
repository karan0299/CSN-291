"""hms URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/2.2/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path
from rest_framework.routers import DefaultRouter

from hospital.views.doctor import DoctorViewSet
from hospital.views.nurse import NurseViewSet
from hospital.views.cleaning import CleaningStaffViewSet
from hospital.views.pharmacy import PharmacyViewSet
from hospital.views.medicine import MedicineViewSet
from hospital.views.administrator import AdministratorViewSet
from hospital.views.diagnosis import DiagnosisViewSet
from hospital.views.lab import LabViewSet

router = DefaultRouter()

router.register(r'doctor', DoctorViewSet, base_name='doctor')
router.register(r'nurse', NurseViewSet, base_name='nurse')
router.register(r'cleaning_staff', CleaningStaffViewSet, base_name='cleaning_staff')
router.register(r'pharmacy', PharmacyViewSet, base_name='pharmacy')
router.register(r'medicine', MedicineViewSet, base_name='medicine')
router.register(r'administrator', AdministratorViewSet, base_name='administrator')
router.register(r'diagnosis', DiagnosisViewSet, base_name='diagnosis')
router.register(r'lab', LabViewSet, base_name='lab')

urlpatterns = [
    path('admin/', admin.site.urls),
]

urlpatterns += router.urls