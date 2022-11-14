#include<stdio.h>

struct student 
{
    int roll;
    float gpa;
};

int main()
{
   struct student s1={12,8.5};
   struct student *ptr=&s1;
   printf("%d",(*ptr).roll);

   return 0;

}