/* Aim: Create a structure employee(roll number,name,marks of three subjects,percentage). Accept the details of n employees and write a menu driven program toperform the following operations. Write seperate functions for different options.

1]Search
2]Modify
3]Display all employee details
4]Display all employees having percentage > ____
5]Display employee having mkaximum percentage      */

#include<stdio.h>
#include<string.h>

struct employee
{
 int id;
 char name[20];
 float salary;
};

void SearchBy_Name(struct employee S[],int size);
void SearchBy_Id(struct employee S[],int size);
void Modify(struct employee S[],int size,int roll_no);
void DisplayAll(struct employee S[],int size);
void SalaryGT(struct employee S[],float checksalary,int size);
void MaxSalary(struct employee S[],int size);

void main()
{
 struct employee S[200];
 int i,id,size,ope;
 float checkSalary;

 printf("\n How many employees are there:- ");
 scanf(" %d",&size);

 printf("\n Enter the information of employees as follow:- \n \n");
 printf("\n Id\t Name \t Salary \n \n");

 for(i=0;i<size;i++)
 scanf(" %d%s%f",&S[i].id,S[i].name,&S[i].salary);


 do{
 printf("\n \t ***** Menu *****");
 printf("\n 1.Search by name");
 printf("\n 2.Search by id");
 printf("\n 3.Display all");
 printf("\n 4.Display all empoloyees having salary greater than ___");
 printf("\n 5.Display employee having maximum salary");
 printf("\n 6.Exit \n \n");
 printf("\n Enter Your Choice:- ");
 scanf(" %d",&ope);

 switch(ope)
 {
 case 1:
 SearchBy_Name(S,size);
 break;

 case 2:
 SearchBy_Id(S,size);
 break;

 case 3:
 DisplayAll(S,size);
 break;

 case 4:
 printf("\n Enter salary:- ");
 scanf("%f",&checkSalary);
 SalaryGT(S,checkSalary,size);
 break;

 case 5:
 MaxSalary(S,size);
 break;

 }}while(ope!=6);

} // End of main

// Search Function
void SearchBy_Name(struct employee S[],int size)
{
 char name[20];
 int i,flg=0;;

 printf("\n Enter the name of the employee:- ");
 scanf(" %s",name);

 for(i=0;i<size;i++)
 {
  if(strcmp(S[i].name,name)==0)
  {
  flg=1;
  break;
  }
 }

 if(flg==1)
 {
 printf("\n We have found this result:- \n ");
 printf("\n Id\t Name \t Salary \n \n");
 printf("\n %d \t %s \t %6f \n",S[i].id,S[i].name,S[i].salary);
 }
 else
 printf("\n We haven't found any record \n \n");
}

// SearchBy_Id Function
void SearchBy_Id(struct employee S[],int size)
{

 int i,flg=0,id;

 printf("\n Enter id of the employee:- ");
 scanf(" %d",&id);

 for(i=0;i<size;i++)
 {
  if(S[i].id==id)
  {
  flg=1;
  break;
  }
 }

 if(flg==1)
 {
 printf("\n We have found this result:- \n ");
 printf("\n Id\t Name \t Salary \n \n");
 printf("\n %d \t %s \t %6f \n",S[i].id,S[i].name,S[i].salary);
 }
 else
 printf("\n We haven't found any record \n \n");
}

// DisplayAll Function
void DisplayAll(struct employee S[200],int size)
{
 int i;

 printf("\n The Information of employees is as follow:- \n \n");
 printf("\n Id\t Name \t Salary \n \n");

 for(i=0;i<size;i++)
 printf("\n %d \t %s \t %6f \n",S[i].id,S[i].name,S[i].salary);
}
// SalaryGT Function
void SalaryGT(struct employee S[],float checkSalary,int size)
{
 int i;

 printf("\n The Information of employees with salry>%f :- \n \n",checkSalary);
 printf("\n Id\t Name \t Salary \n \n");

 for(i=0;i<size;i++)
 {
  if(S[i].salary>checkSalary)
  printf("\n %d \t %s \t %6f \n",S[i].id,S[i].name,S[i].salary);
 }
}

// MaxSalary Function
void MaxSalary(struct employee S[200],int size)
{
 int i;
 float maxSalary=S[0].salary;

 for(i=0;i<size;i++)
  if(S[i].salary>maxSalary)
  {
  maxSalary=S[i].salary;
  break;
  }

 printf("\n \"%s\" have maximum salary. Below are his details:- - \n ",S[i].name);
 printf("\n Id\t Name \t Salary \n \n");
 printf("\n %d \t %s \t %6f \n",S[i].id,S[i].name,S[i].salary);
}
