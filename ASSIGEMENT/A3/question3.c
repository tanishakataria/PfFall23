/**
 * Programmer: Tanisha
 * Desc: Data from two file combined and stored in file
 * Date: 06/12/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	// opens the three files
	FILE *dep = fopen("Department.txt", "r");
	FILE *per = fopen("Personal.txt", "r");
	FILE *comb = fopen("Combine.txt", "a");

	// temp stores the string data to be concatenated to newarr
	// newarr stores the whole line that is later put into the file
	char temp[20], newarr[20], id[6]; 
	printf("Enter ID: ");
	scanf("%s", &id);
	// first value which is id stored in newarr
	fscanf(per, "%s", &newarr);
	// feof(dep) returns non zero value if end is reached else returns zero
	while(!feof(per) && (strcmp(id, newarr)) != 0){
		// next value accessed
		fscanf(per, "%s", &newarr);
		// if value is NULL, then move to next line using fgets
		if (newarr == NULL)
			fgets(temp, 20, per);
	}
	// access the value next to the id
	fscanf(per, "%s", &temp);
	// add to the array
	strcat(newarr, " ");
	strcat(newarr, temp);
	// same as above but for dep
	fscanf(dep, "%s", &temp);
	while((strcmp(id, temp)) != 0){
		fscanf(dep, "%s", &temp);
		if (temp == NULL)
			fgets(temp, 20, dep);
	}
	fscanf(dep, "%s", &temp);
	strcat(newarr, " ");
	strcat(newarr, temp);
	fprintf(comb, "Name: Muhammed Owais\nId: 23K-0047\n");
	fputs(newarr, comb);
	fprintf(comb, "\n");
}
