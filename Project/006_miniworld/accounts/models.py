from django.db import models
from django.contrib.auth.models import User

class Profile(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE)
    bio = models.TextField(blank=True)
    domain = models.SlugField(unique=True, null=True, blank=True)
    profile_pic = models.ImageField(upload_to='profiles/', default='default.png')

    def has_domain(self):
        return bool(self.domain)

    def __str__(self):
        return self.user.username