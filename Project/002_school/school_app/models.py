from django.db import models

# Create your models here.
class add_students(models.Model):
    Full_Name = models.CharField(max_length=30)
    Dob = models.DateField()
    Class = models.CharField()
    Parent_Contact = models.IntegerField()
    Gender = models.CharField()
    Email = models.EmailField()
    Address = models.CharField(max_length=80)
