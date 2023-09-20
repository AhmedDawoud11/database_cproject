
typedef struct
{
    uint32 Student_ID;
    uint32 Student_year;
    uint32 Course1_ID;
    uint32 Course1_grade;
    uint32 Course2_ID;
    uint32 Course2_grade;
    uint32 Course3_ID;
    uint32 Course3_grade;
 } student;
bool SDB_isfull();
uint8 SDB_GetUsedSize();
bool SDB_AddEntry();
void SDB_deleteEntry ();
bool SDB_ReadEntry ();
void SDB_GetList();
bool SDB_IsIDExist();
void SDB_APP();
void SDB_action(uint8 choicee);

