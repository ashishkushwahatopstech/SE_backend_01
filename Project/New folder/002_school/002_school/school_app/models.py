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



class add_teachers(models.Model):
    Full_Name = models.CharField(max_length=30)
    Gender = models.CharField()
    Dob = models.DateField()
    Email = models.EmailField()
    Phone = models.IntegerField()
    Subject = models.CharField(max_length=15)
    Experience = models.CharField(max_length=15)
    Qualifications = models.CharField()
    Join_Date = models.DateField()
    Address = models.CharField(max_length=50)
