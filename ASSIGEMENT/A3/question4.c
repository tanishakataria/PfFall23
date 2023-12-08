/**
 * Programmer: Tanisha 
 * Desc: Prints Max and Total Salaries of Departments
 * Date: 05/12/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>
#include <string.h>

typedef struct
{
	int id;
	char first_name[10];
	char last_name[10];
	int salary;
	char join_date[40];
	char department[10];
}Worker;

typedef struct 
{
	int id;
	char bonus_date[40];
	int bonus_amount;
}Bonus;

typedef struct 
{
	int id;
	char worker_title[20];
	char affected_from[40];	
}Title;

char departs[][10] = {"HR", "Admin", "Account"};
char (*ptr1)[10] = &departs[0];
char (*ptr2)[10] = &departs[0];

int maxSalary(Worker worker[], char (*ptr1)[10]) {
	int highest = 0, value;
	for (int i = 0; i < 8; ++i)
	{
		if (strcmp(worker[i].department, *ptr1) == 0)
		{
			if (worker[i].salary > highest) {
				highest = worker[i].salary;
				value = worker[i].id;
			}
		}
	}
	return value;
}

int totalSalary(Worker worker[], char (*ptr2)[10])
{
	int total = 0;
	for (int i = 0; i < 8; ++i)
	{
		if (strcmp(worker[i].department, *ptr2) == 0)
		{
			total += worker[i].salary;
		}
	}
	return total;
}


void display(Worker worker[], int a) {
	int id;
	if (a == 1){		
		for (int i = 0; i < 3; ++i)
		{
			id = maxSalary(worker, ptr1 + i);
			printf("%d %s %s %d %s %s\n", worker[id-1].id, worker[id-1].first_name, worker[id-1].last_name, worker[id-1].salary, worker[id-1].join_date, worker[id-1].department);
		}
	}
	if (a == 2)
	{
		for (int i = 0; i < 3; ++i)
		{
			printf("%s- %d\n", *(ptr2+i), totalSalary(worker, ptr2 + i));
		}
	}
}

int main(){
	Worker worker[8] = {
		{1, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
		{2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
		{3, "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
		{4, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
		{5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
		{6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
		{7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
		{8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"}
	};
	Bonus bonus[5] = {
		{1, "2016-02-20 00:00:00", 5000},
		{2, "2016-06-11 00:00:00", 3000},
		{3, "2016-02-20 00:00:00", 4000},
		{1, "2016-02-20 00:00:00", 4500},
		{2, "2016-06-11 00:00:00", 3500}
	};
	Title title[8] = {
		{1, "Manager", "2016-02-20 00:00:00"},
		{2, "Executive", "2016-06-11 00:00:00"},
		{8, "Executive", "2016-06-11 00:00:00"},
		{5, "Manager", "2016-06-11 00:00:00"},
		{4, "Asst. Manager", "2016-06-11 00:00:00"},
		{7, "Executive", "2016-06-11 00:00:00"},
		{6, "Lead", "2016-06-11 00:00:00"},
		{3, "Lead", "2016-06-11 00:00:00"}
	};
	printf("Name: Muhammed Owais\nId: 23K-0047\n");
	display(worker, 1);
	display(worker, 2);
}
