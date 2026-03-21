import sqlite3

print("Program start")

con = sqlite3.connect("student.db")

cursor = con.cursor()




# cursor.execute("create table student (id int primary key,name varchar(50),age int,address varchar(50))")

# cursor.execute("insert into student values(1,'Ashish',23,'Kim')")
# cursor.execute("insert into student values(2,'Satyam',21,'Darbar')")
# cursor.execute("insert into student values(3,'Raj',22,'kolakata')")
# cursor.execute("insert into student values(4,'Chetan',25,'Surat')")
# cursor.execute("insert into student values(5,'Sachin',30,'Bharuch')")

# con.commit()

cursor.execute("select * from student")

rows = cursor.fetchall()

print("Student Record")
for i in rows:
    print(i)

con.close()
print("Program ended")

