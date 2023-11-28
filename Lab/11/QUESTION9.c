/*
* Programmer: TANISHA KATARIA
* Desc: taking input and printing output in nested structures 
* Date: 21-11-23
*
*/

#include <stdio.h>

 struct regis {
   char course_id[10];
   char course_name[10];

};

struct student{
    char id[10];
    char first_name[10];
    char last_name[10];
    int cell_no;
    char email[20];
    struct regis reg;
};

int main(){
    struct student std[5];
    int i;
    for (i=0; i<5; i++){
        printf ("Enter data of the %d student \n",i+1);
        printf ("Enter the ID of the student \n");
        scanf ("%s \n" ,std[i].id);
        printf ("Enter the first name of the student \n");
        scanf ("%s\n" ,std[i].first_name);
        printf ("Enter the last name of the student\n");
        scanf ("%s\n" ,std[i].last_name);
        printf ("Enter the cell number of the student\n");
        scanf ("%d\n" , &std[i].cell_no);
        printf ("Enter the email of the student\n");
        scanf ("%s\n" ,std[i].email);
        printf ("Enter the course id of the student\n");
        scanf ("%s\n" ,std[i].reg.course_id);
        printf ("Enter the course name of the student\n");
        scanf ("%s\n" ,std[i].reg.course_name);

    }

    for (i=0; i<5; i++){
        printf ("The data of the %d student \n",i+1);
        printf ("The ID of the student \n",std[i].id);
        printf ("The first name of the student \n",std[i].first_name);
        printf ("The last name of the student\n",std[i].last_name);
        printf ("The cell number of the student\n" , std[i].cell_no);
        printf ("The email of the student\n" ,std[i].email);
        printf ("The course id of the student\n",std[i].reg.course_id);
        printf ("The course name of the student\n" ,std[i].reg.course_name);
    }

    return 0;
}

