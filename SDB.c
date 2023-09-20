#include "STD.h"
#include "SDB.h"

//the counter counts the num of students in my database
int32 counter =0;
//i is for the array of struct created
int32 i=0;

 student database[5];

 bool SDB_isfull()
{
    if (counter==5)
    {
        printf("true\n");
        return 1 ;
    }
    else
    {
        printf("false\n");
      return 0;
    }

}
uint8 SDB_GetUsedSize()
 {
printf("the number of students entered = %d\n",counter);
     return counter;

 }



bool SDB_AddEntry()
{

    while(database[i].Student_ID!=0&&i<5)
    {
       i++;
    }
    if(i<5)
    {
      printf("please enter the student id\n");
      scanf("%d",&(database[i].Student_ID));

      printf("please enter the Student_year\n");
      scanf("%d",&(database[i].Student_year));

      printf("please enter the Course1_ID \n");
      scanf("%d",&(database[i].Course1_ID));

      printf("please enter the Course1_grade\n");
      scanf("%d",&(database[i].Course1_grade));

      printf("please enter the Course2_ID\n");
      scanf("%d",&(database[i].Course2_ID));

      printf("please enter the Course2_grade\n");
      scanf("%d",&(database[i].Course2_grade));

      printf("please enter the Course3_ID\n");
      scanf("%d",&(database[i].Course3_ID));

      printf("please enter the Course3_grade\n");
      scanf("%d",&(database[i].Course3_grade));


      counter++;
       return 1;
     }
else
    {
    printf("full cant enter any more students\n");
return 0;
    }
}
   void SDB_deleteEntry ()
  {
  int32 id,f;
  printf("please enter the student id you want to delete\n");
  scanf("   %d",&id);
   for(f=0;f<5;f++)
  {
      if (id==database[f].Student_ID)
      i=f;

  }

      if (id==database[i].Student_ID)
      {
          database[i].Student_ID=0;
          database[i].Student_year=0;
          database[i].Course1_ID=0;
          database[i].Course1_grade=0;
          database[i].Course2_ID=0;
          database[i].Course2_grade=0;
          database[i].Course3_ID=0;
          database[i].Course3_grade=0;
      }
else
   printf("the id you entered is not in the database\n");



counter--;

  }
 bool SDB_ReadEntry ()
 {
//f is to loop until we find the  index we want to read its array data and we hold it in i
int32 id,f;
 printf("please enter the student id you want to show\n");
scanf("   %d",&id);
  for(f=0;f<5;f++)
  {
      if (id==database[f].Student_ID)
      i=f;

  }
  if (id==database[i].Student_ID)
  {


     printf("id =                %d  \n",database[i].Student_ID);
     printf("student year =      %d  \n",database[i].Student_year);
     printf("course 1 id is      %d  \n",database[i].Course1_ID);
     printf("course 1 grade =    %d  \n",database[i].Course1_grade);
     printf("course 2 id         %d  \n",database[i].Course2_ID);
     printf("course 2 grade      %d  \n",database[i].Course2_grade);
     printf("course 3 id         %d  \n",database[i].Course3_ID);
     printf("course 3 grade      %d  \n",database[i].Course3_grade);
     printf("\n");
     printf("\n");
     return 1;
  }
  else
  {
      printf("the id you entered is not in the database\n");
      return 0;
  }
 }
 void SDB_GetList()
 {

     int32 j;
     printf("number of students = %d \n",counter);
     for(j=0;j<5;j++)
     {
         if (database[j].Student_ID==0)
         {
               continue;

         }
         else
         printf("id =             %d  \n",database[j].Student_ID);
     }

 }
 bool SDB_IsIDExist()
 {
     i=-1;
     int32 id,f;
 printf("please enter the student id to check if it exist \n");
scanf("   %d",&id);
for(f=0;f<5;f++)
  {
      if (id==database[f].Student_ID)
      i=f;

  }
if (i==-1)
{
    printf("the id you entered does not exist  0 \n");
    return 0;

}
else
{
    printf("the id you entered  existes  1 \n");
     return 1;
}
 }

