from myproject.urls import path
from myapp.views import *

urlpatterns = [
    path('', index, name="index"),
    path("contact", contact, name="contact"),
    path("membership", membership, name="membership"),
    path("classes", classes, name="classes")
    
]