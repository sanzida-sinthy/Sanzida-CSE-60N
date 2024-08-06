#include<stdio.h>
#include<string.h>

struct person
{

    char name[20];
    int age;
    float salary;

};

void display(struct person p)
{
    printf("\nName :%s \n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary :%f\n",p.salary);


}
int main()
{

    struct person person1,person2;
    strcpy(person1.name,"sanzida sultana");
    person1.age = 12;
    person1.salary = 39458;
    display(person1);



    strcpy(person2.name,"sanzida sinthy");
    person2.age = 22;
    person2.salary = 5600;
    display(person2);



    getch() ;

}
