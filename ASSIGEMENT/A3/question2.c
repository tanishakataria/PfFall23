/*
 * Programmer: tanisha
 * Desc: Department Data Stored Using Struct
 * Date: 26/11/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// employee structure created
typedef struct employee
{
	// stores name of employee
	char name[20];
	// stores role of employee
	char role[15];
	int communication;
	int teamwork;
	int creativity;
} employee;

// department structure stores the department and its employees
typedef struct department
{
	// stores department name
	char departname[15];
	employee emp[5];
} department;

int random(int n);
void fill(char names[][20], char roles[][15], department data[]);
void best(department data[]);
int main(){
	// 20 names stored
	char names[][20] = {"Alice", "Bob", "Charlie", "David", "Eva", "Frank", "Grace", "Harry", "Ivy", "Jack", "Katie", "Leo", "Mia", "Nick", "Olivia", "Paul", "Quinn", "Ryan", "Sara", "Tom"};
	// roles stored for use
	char roles[][15] = {"Director", "Executive", "Manager", "Employee", "Trainee"}; 
	// 4 departments array created
	department data[4];
	printf("Name: Muhammed Owais\nId: 23K-0047\n");
	// to fill the data array
	fill(names, roles, data);
	// to output the best department
	best(data);
}

// random function created for ease of use, so wont have to type rand() % 20 or rand() % 100 again and again
int random(int n){
	return rand() % n;
}

void fill(char names[][20], char roles[][15], department data[]){
	// num stores the random number
	int num;
	// to keep track of which names have been used
	int nameTrack[20] = {0};
	// stores department names
	char departments[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	// loops 4 times, the number of departments
	for (int i = 0; i < 4; ++i)
	{
		// to keep track of roles that have been used
		int rolesTrack[5] = {0};
		// each department has 5 employees
		for (int j = 0; j < 5; ++j)
		{
			// copies the department name
			strcpy(data[i].departname, departments[i]);	

			// to generate a new number if that number has already been generated before
			do {
				num = random(20);
			} while(nameTrack[num] == 1); //1 is in the array already, meaning that this name has been used before
			nameTrack[num] = 1;
			// copy that name to the array data
			strcpy(data[i].emp[j].name, names[num]);

			// the same as above but for roles
			do {
				num = random(5);
			} while(rolesTrack[num] == 1);
			rolesTrack[num] = 1;
			strcpy(data[i].emp[j].role, roles[num]);

			// random numbers 1 to 100 
			num = random(100) + 1;
			data[i].emp[j].communication = num;

			num = random(100) + 1;
			data[i].emp[j].teamwork = num;

			num = random(100) + 1;
			data[i].emp[j].creativity = num;
		}

	}
}

void best(department data[]){
	int sum, best, largest = 0;
	char departments[][15] = {"Hr", "Finance", "Marketing", "Logistics"};
	// finding the best department
	for (int i = 0; i < 4; ++i)
	{
		sum = 0;
		for (int j = 0; j < 5; ++j)
		{
			sum += data[i].emp[j].teamwork + data[i].emp[j].creativity + data[i].emp[j].communication;
		}
		printf("Sums of %s: %d\n", departments[i], sum);
		if (sum > largest)
		{
			largest = sum;
			best = i;
		}
	}
	// printing the best department in tabular form
	printf("Best Department is %s: %d\n", departments[best], largest);
	// %*s, denotes the space this will use, so 15 means, 15 spaces set aside for the string to use 
	printf("|%*s| %*s| %13s| %11s| %9s|\n", 15, "Employee Name", 15, "Employee Role", "Communication", "Creativity", "Teamwork");
	for (int i = 0; i < 5; ++i)
	{
		printf("|%*s| %*s| %13d| %11d| %9d|\n",15, data[best].emp[i].name, 15, data[best].emp[i].role, data[best].emp[i].communication, data[best].emp[i].creativity, data[best].emp[i].teamwork);
	}
}
