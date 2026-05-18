from django.urls import path
from myapp.views import *
from django.conf import settings
from django.conf.urls.static import static
urlpatterns = [
    path("", students_detail, name="students"),
    path("add", student_add, name="add"),
    path("edit", student_edit, name="edit"),
    path("delete", student_delete, name="delete")
]

urlpatterns +=static(settings.MEDIA_URL, document_root = settings.MEDIA_ROOT)