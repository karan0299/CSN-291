# Generated by Django 2.2.6 on 2019-10-05 21:02

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('hospital', '0001_initial'),
    ]

    operations = [
        migrations.CreateModel(
            name='Medicine',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
                ('stock', models.IntegerField(max_length=5)),
                ('cost', models.DecimalField(decimal_places=3, max_digits=10)),
            ],
        ),
        migrations.CreateModel(
            name='Pharmacy',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('pharmacist_name', models.CharField(max_length=20)),
                ('pharmacist_salary', models.DecimalField(decimal_places=3, max_digits=10)),
                ('medicines', models.ManyToManyField(related_name='medicines', to='hospital.Medicine')),
            ],
        ),
    ]
