from django.db import models

# Create your models here.
class Student(models.Model):
    first_name = models.CharField(max_length=50)
    last_name = models.CharField(max_length=50)
    image = models.ImageField(upload_to="image", null=True)
    email = models.EmailField(max_length=50)
    contact = models.CharField(max_length=15)

    def __str__(self):
        return self.first_name & self.last_name
