from django.db import models
# from myapp.urls import *
# Create your models here.

# class Student(models.Model):
#     name = models.CharField(max_length=100)
#     email = models.EmailField()
#     age = models.IntegerField()

#     def __str__(self):
#         return self.name


from django.db import models


class Plan(models.Model):
    name = models.CharField(max_length=100)  # STARTER, FORGE PRO, ELITE
    description = models.TextField()

    monthly_price = models.IntegerField()
    annual_price = models.IntegerField()

    is_featured = models.BooleanField(default=False)  # "Most Popular"

    def __str__(self):
        return self.name


class Feature(models.Model):
    plan = models.ForeignKey(Plan, on_delete=models.CASCADE, related_name='features')

    name = models.CharField(max_length=255)  # e.g. "Gym floor access"
    is_available = models.BooleanField(default=True)  # yes/no

    def __str__(self):
        return f"{self.plan.name} - {self.name}"