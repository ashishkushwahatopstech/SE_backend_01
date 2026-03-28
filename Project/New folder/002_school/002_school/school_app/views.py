from django.shortcuts import render, redirect
from school_app.models import *
# Create your views here.

def index(request):
    total_students = add_students.objects.count()
    # total_teachers = add_teachers.objects.count()

    return render(request, 'index.html', {
        'total_students': total_students,
        # 'total_teachers': total_teachers
    })

    # return render(request, "index.html")

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

def manage_teacher(request):
    return render(request, "teacher/manage_teacher.html")


def add_teacher(request):
    if request.method == "POST":
        data = request.POST
        Name = data.get("name")
        Gender = data.get("gender")
        Dob = data.get("dob")
        Email = data.get("email")
        Phone = data.get("phone")
        Subject = data.get("subject")
        Qualifications = data.get("qualification")
        Experience = data.get("experience")
        Join_date = data.get("join_date")
        Address = data.get("address")

        add_teachers.objects.create(
            Full_Name = Name,
            Gender = Gender,
            Dob = Dob,
            Email = Email,
            Phone = Phone,
            Subject = Subject,
            Qualifications = Qualifications,
            Experience = Experience,
            Join_Date = Join_date,
            Address = Address
        )
        return redirect("mng-teacher")
    # add_teachers.objects.all()
    return render(request, "teacher/add_teacher.html", {"add_teachers": add_teachers})

def view_teacher(request):
    teachers = add_teachers.objects.all()
    return render(request, "teacher/view_teacher.html", {"teachers": teachers})

