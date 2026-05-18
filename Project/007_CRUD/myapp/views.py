from django.shortcuts import render, redirect
from myapp.models import *
import os
# Create your views here.
def students_detail(request):
    s = Student.objects.all()
    return render(request, "student.html", {"students":s})


def student_delete(request):
    did = request.GET.get("id")
    d = Student.objects.get(pk=did)
    os.remove(d.image.path)
    d.delete()
    return redirect("students")


def student_edit(request):
    if request.method == 'POST':
        data = request.POST
        id = data.get("student_id")
        fname = data.get("fname")
        lname = data.get("lname")
        email = data.get("email")
        contact = data.get("contact")

        s = Student.objects.get(pk=id)
        s.first_name = fname
        s.last_name = lname
        if request.FILES.get("image"):

            image = request.FILES.get("image")

            # remove old image safely
            if s.image and os.path.exists(s.image.path):
                os.remove(s.image.path)

            s.image = image
        s.email = email
        s.contact = contact
        s.save()
        return redirect("students")
    did = request.GET.get("id")
    s = Student.objects.get(pk=did)
    return render(request, "add_student.html", {"student":s})



def student_add(request):

    if request.method == 'POST':
        data = request.POST
        fname = data.get("fname")
        lname = data.get("lname")
        image = request.FILES.get("image")
        email = data.get("email")
        contact = data.get("contact")

        Student.objects.create(
            first_name = fname,
            last_name = lname,
            image = image,
            email = email,
            contact = contact
        )
        return redirect("students")
    return render(request, "add_student.html")
