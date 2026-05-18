from django.shortcuts import render, redirect
from myapp.models import *

def index(request):
    return render(request, "index.html")

def contact(request):
    return render(request, "contact.html")

def membership(request):
    plans = Plan.objects.all()
    return render(request, "membership.html", {"plans":plans})

def classes(request):
    return render(request, "classes.html")