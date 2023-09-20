#include "STD.h"
#include "SDB.h"
void SDB_APP()
{
    uint8 choice;
    for(;;)
    {
    printf("\n");
    printf("to add entry enter 1\n");
    printf("to get used size in database enter 2\n");
    printf("to read student data enter 3\n");
    printf("to get the list of all students enter 4 \n");
    printf("to check is ID exist enter 5\n");
    printf("to delete students enter 6 \n");
    printf("to check data base is full enter 7\n");
    printf("to exit enter 0\n");
    printf("\n");

   printf("please enter your choice \n");
   scanf("  %d",&choice);

SDB_action( choice);

   }

}
void SDB_action(uint8 choicee)
{
      switch(choicee) {
   case 1:
       SDB_AddEntry();
       break;
   case 2:
       SDB_GetUsedSize();
      break;
       case 3:
            SDB_ReadEntry ();
             break;
       case 4:
            SDB_GetList();
             break;
       case 5:
           SDB_IsIDExist();
             break;
       case 6:
            SDB_deleteEntry();
             break;
       case 7:
           SDB_isfull();
             break;
       default:
        break;
   }

}
