
* Programmer: TANISHA KATARIA
* Desc: nested loops to print data
* Date: 21-11-23
*
*/

#include <stdio.h>
struct employee {
    int id;
    char name[20];
    int salary;

};
struct organiz {
    char organiz_name[20];
    char organiz_no[20];
    struct employee emp;
};

int main (){
struct organiz org = {"NU-Fast", "NUFAST123ABC", 127, "Linus Sebastian", 40000};
printf ("The size of structure organization: %d \n", sizeof(struct organiz));
printf ("Organisation Name: ");
printf ("%s \n", org.organiz_name);
printf ("Organisation Number: ");
printf ("%s \n", org.organiz_no);
printf ("Employee ID: ");
printf ("%d \n", org.emp.id);
printf ("Employee name: ");
printf ("%s \n", org.emp.name);
printf ("Employee salary: ");
printf ("%d\n", org.emp.salary);

return 0;
}
