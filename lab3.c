#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50
// Задание 1
 typedef struct {
     char name[N];
     double cost;
     int count;
 } PRODUCT;

 void print_product(PRODUCT prod)
 {
     printf("Товар: %s; Стоимость: %g; Количество: %d;\n", prod.name, prod.cost, prod.count);
 }

 PRODUCT input_product()
 {
     PRODUCT res;
     char tmp[N];
     printf("Vvedite nazvaniye tovara\n");
     scanf("%s",res.name);
     printf("Vvedite stoimost tovara\n");
     scanf("%s",tmp);
     res.cost = atof(tmp);
     printf("Vvedite kolichestvo tovara\n");
     scanf("%s",tmp);
     res.count = atoi(tmp);
     return res;
 }

 void select_products(PRODUCT *products, double porog, int len)
 {
     for(int i = 0; i<len; i++)
     {
         if(products[i].cost>porog){
             print_product(products[i]);
         }
     }
 }
// Задание 2
 typedef struct {
     int day;
     int month;
     int year;
 } Data;

 typedef struct {
     char full_name[N];
     Data date;
     char group[N];
 } Student;

 void print_student(Student stud)
 {
      printf("Студент: %s; Дата рождения: %d.%d.%d; Группа: %s;\n",stud.full_name,stud.date.day,stud.date.month,stud.date.year,stud.group);
 }

 Student input_student()
 {
     Student res;
     char tmp[N][3];
     printf("Vvedite imya studenta\n");
     scanf("%s",res.full_name);
     printf("Vvedite datu rozhdeniya studenta\n");
     scanf("%s.%s.%s",tmp[0],tmp[1],tmp[2]);
     res.date.day = atoi(tmp[0]);
     res.date.month = atoi(tmp[1]);
     res.date.year = atoi(tmp[2]);
     printf("Vvedite gruppu studenta\n");
     scanf("%s",res.group);
     return res;
 }

 void sort_students(Student *students, int len)
 {
     Student tmp;
     for(int i=0;i<len-1;i++)
     {
         for(int j=len-1;j>i;j--){
             int res = strcmp(students[j-1].full_name,students[j].full_name);
             if(res>0)
             {
                 tmp = students[j-1];
                 students[j-1] = students[j];
                 students[j] = tmp;
                 continue;
             }
             if(res<0)
             {
                 tmp=students[j];
                 students[j] = students[j-1];
                 students[j-1]=tmp;
                 continue;
             }
         }
     }
 }
// Задание 3
typedef struct{
    int a;
    int bi;
} ComplexNum;

ComplexNum add_complex(ComplexNum a, ComplexNum b)
{
    ComplexNum res;
    res.a = a.a + b.a;
    res.bi = a.bi + b.bi;
    return res;
}

ComplexNum subtract_complex(ComplexNum a, ComplexNum b)
{
    ComplexNum res;
    res.a = a.a - b.a;
    res.bi = a.bi - b.bi;
    return res;
}

ComplexNum multiply_complex_scalar(ComplexNum a, int b){
    ComplexNum res;
    res.a = a.a * b;
    res.bi = a.bi * b;
    return res;
}

ComplexNum multiply_complex(ComplexNum a, ComplexNum b)
{
    ComplexNum res;
    res.a = (a.a * b.a) - (a.bi * b.bi);
    res.bi = (a.a + b.bi) + (a.bi * b.a);
    return res;
}

void print_complex(ComplexNum a)
{
    printf("%d+%di",a.a,a.bi);
}

int main()
{
    int len = 5;
    char tmp[N];
    // Задание 1
     PRODUCT shop[len];
     double porog;
     for(int i=0;i<len;i++)
     {
         shop[i]=input_product();
     }
     printf("Vvedite porog stoimosti\n");
     scanf("%s",tmp);
     porog = atof(tmp);
     select_products(shop,porog,len);
     return 0;
    // Задание 2
    // Student spisok[len];
    // for(int i=0;i<len;i++)
    // {
    //     spisok[i]=input_student();
    // }
    // sort_students(spisok,len);
    // for(int i=0;i<len;i++)
    // {
    //     print_student(spisok[i]);
    // }
    
}
