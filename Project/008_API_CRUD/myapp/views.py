from django.shortcuts import render
from rest_framework.response import Response
from rest_framework.decorators import APIView
from myapp.models import *
from myapp.serializer import *
import os

# Create your views here.
class Students_details(APIView):
    def get(self,request):
        students = Student.objects.all()
        s = Students_serializer(students, many=True)
        return Response({"data":s.data})
    
    def post(self, request):
        s = Students_serializer( data = request.data)
        if s.is_valid():
            s.save()
            return Response({"data": s.data, "message":"Data Entered Successfully!!!"})
        
        else:
            return Response({"data":s.data, "message":"Something Went Wrong!!!"})
        

class Students_Archive(APIView):
    def put(self, request, id):
        student = Student.objects.get(pk=id)
        if 'image' in request.FILES:

            if student.image:
                if os.path.isfile(student.image.path):
                    os.remove(student.image.path)
        s = Students_serializer(student, request.data, partial=True)
        if s.is_valid():
            s.save()
            return Response({"data":s.data, "message":"Data Updated Successfully!!!"})
        else:
            return Response({"error":s.errors, "message":"Something Went Wrong!!!"})
    
    def delete(self, request, id):
        student = Student.objects.get(pk=id)
        if student.image:
            if os.path.isfile(student.image.path):
                os.remove(student.image.path)
        student.delete()
        return Response({"data":student.data, "message":"Data Deleted Successfully!!!"})
        