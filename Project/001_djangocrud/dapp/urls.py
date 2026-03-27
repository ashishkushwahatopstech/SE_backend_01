from django.urls import *
from dapp.views import *

urlpatterns = [
    path('', index, name="index"),
    path('employe/', employe, name="employe"),
    path('student/', student, name="student"),
    path('product/', product, name="product"),
    path('delete/<int:id>/', delete_student, name="delete_student")
]