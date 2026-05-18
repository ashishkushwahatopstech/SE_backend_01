from rest_framework import serializers
from doctorapp.models import *
class doctorSerialize(serializers.ModelSerializer):
    class Meta:
        model=Doctor
        fields='__all__'