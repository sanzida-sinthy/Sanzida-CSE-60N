#include<stdio.h>

struct person
{
    int age;
    float salary;
};
int main(){

struct person person[4];

int i;
for(i=0;i<4;i++){

printf("Enter information for person %d \n",i+1);

  printf("Enter age : \n");
  scanf("%d",&person[i].age);
   printf("Enter salary :\n ");
  scanf("%f",&person[i].salary);


}
for(i=0;i<4;i++){

printf("\n\nInformation for person %d \n",i+1);

  printf("Age : %d\n ",person[i].age);

printf(" salary : %.2f\n",person[i].salary);
}
  return 0;


}
