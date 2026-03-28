from django.urls import path, include
from school_app.views import *

urlpatterns = [
    path('', index, name="index"),
    path('mng-attendence', manage_attendence, name="mng-attendence"),
    path('mng-teacher', manage_teacher, name="mng-teacher"),
    path('mng-student', manage_student, name="mng-student"),
    path('mng-fees', manage_fees, name="mng-fees"),
    path('exam-and-result', exam_and_result, name="exam-and-result"),
    path('notice-board', notice_board, name="notice-board"),
    path('add-student', add_student, name="add-student"),
    path('view-student', view_student, name="view-student"),
    path('view-teacher', view_teacher, name="view-teacher"),
    path('add-teacher', add_teacher, name="add-teacher"),
    path('mng-teacher', manage_teacher, name="mng-teacher"),

    
]