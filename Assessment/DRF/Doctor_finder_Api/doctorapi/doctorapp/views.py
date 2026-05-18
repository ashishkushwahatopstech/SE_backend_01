from django.shortcuts import render, get_object_or_404
from rest_framework.response import Response
from rest_framework.views import APIView
from rest_framework import status
from rest_framework.pagination import LimitOffsetPagination
from doctorapp.serializers import *
from doctorapp.models import *



class DoctorPagination(LimitOffsetPagination):
    default_limit = 5
    max_limit = 20


class DoctorView(APIView):
    def get(self, request):
        doctors = Doctor.objects.all()
        ordering = request.GET.get('ordering')
        if ordering:
            doctors = doctors.order_by(ordering)
        paginator = DoctorPagination()
        paginated_doctors = paginator.paginate_queryset(doctors, request)
        ser = doctorSerialize(paginated_doctors, many=True)
        return paginator.get_paginated_response({ "data": ser.data})

    def post(self, request):
        ser = doctorSerialize(data=request.data)
        if ser.is_valid():
            ser.save()
            return Response({ "data": ser.data,"message": "Data inserted Successfully.."},status=status.HTTP_201_CREATED)
        return Response({"errors": ser.errors},status=status.HTTP_400_BAD_REQUEST)


class DoctorViewRetrive(APIView):
    def get(self, request, id):
        doctor = get_object_or_404(Doctor, pk=id)
        ser = doctorSerialize(doctor)
        return Response({"data": ser.data},status=status.HTTP_200_OK)

    def put(self, request, id):
        doctor = get_object_or_404(Doctor, pk=id)
        ser = doctorSerialize(doctor, data=request.data)
        if ser.is_valid():
            ser.save()
            return Response({"data": ser.data,"message": "Data Updated Successfully.."},status=status.HTTP_200_OK)
        return Response({"errors": ser.errors},status=status.HTTP_400_BAD_REQUEST)

    def delete(self, request, id):
        doctor = get_object_or_404(Doctor, pk=id)
        doctor.delete()
        return Response({"message": "Data Deleted..!"},status=status.HTTP_204_NO_CONTENT)