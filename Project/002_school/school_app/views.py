from django.shortcuts import render, redirect
from school_app.models import *
# Create your views here.

def index(request):
    return render(request, "index.html")

def manage_attendence(request):
    return render(request, "manage_attendence.html")

def manage_student(request):
    return render(request, "manage_student.html")

def manage_teacher(request):
    return render(request, "manage_teacherv.html")

def manage_fees(request):
    return render(request, "manage_fees.html")

def notice_board(request):
    return render(request, "notice_board.html")

def exam_and_result(request):
    return render(request, "exam_and_result.html")

def add_student(request):
    if request.method == "POST":
        data = request.POST
        Name = data.get("name")
        Dob = data.get("dob")
        Class = data.get("student_class")
        Parent_contact = data.get("parent_contact")
        Gender = data.get("gender")
        Email = data.get("email")
        Address = data.get("address")

        add_students.objects.create(
            Full_Name = Name,
            Dob = Dob,
            Class = Class,
            Parent_Contact = Parent_contact,
            Gender = Gender,
            Email = Email,
            Address = Address
        )
        return redirect('mng-student')
    # add_students.objects.all()
    return render(request, "add_student.html", { "add_students":add_students })

def view_student(request):
    students = add_students.objects.all()
    return render(request, "view_student.html", {"students": students})


