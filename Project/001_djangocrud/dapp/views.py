from django.shortcuts import render, redirect, get_object_or_404
from dapp.models import *

# Create your views here.
def index(request):
    students = Student.objects.all()   # get all data
    return render(request, 'index.html', {'students': students})
    # return render(request, "index.html")

def delete_student(request, id):
    student = get_object_or_404(Student, id=id)
    student.delete()
    return redirect('/')

def student(request):


    if request.method == 'POST':
        data = request.POST
        st_name = data.get("st_name")
        st_age = data.get("st_age")
        st_number = data.get("st_number")

        Student.objects.create(
            name = st_name,
            age = st_age,
            contact = st_number
        )
        return redirect('student')
    students = Student.objects.all()
    return render(request, 'student.html', {'students': students})
    # return render(request , "student.html")

def product(request):
    return render(request, "product.html")

def employe(request):
    if request.method == 'POST':
        data = request.POST

        emp_name = data.get("emp_name")
        emp_age = data.get("emp_age")
        emp_number = data.get("emp_number")

        # Save to database
        Employe.objects.create(
            name=emp_name,
            age=emp_age,
            contact=emp_number
        )

        return redirect('employe')  # prevent resubmission

    return render(request, "employe.html")