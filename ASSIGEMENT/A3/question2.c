#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

    
char roles[10][10] = {"Director", "Executive","Manager","Trainee","Employee"};
char names[20][20] = {
        "Ezra Turner","Ava Bennett","Jasper Murphy","Isla Thompson","Felix Lewis","Zoe Martinez","Oliver Rodriguez","Luna Baker","Leo Campbell","Scarlett Hall","Asher Cooper","Mia Simmons","Liam Brooks","Aurora Davis","Noah Garci","Stella Wrigh","Eli Nelson","Penelope Morgan","Owen Taylor","Ivy Foster"
    };
char departments[5][10] = {"HR","Finance","Marketing","Logistics"};
int a=0;
typedef struct Employeement{
    char name[20];
    char role[20];
    int communication;
    int teamwork;
    int creativity;
}depart;

void print(depart *dep){
    printf("%5c Name %15cRole %8cCommunication %5cTeamwork %5cCreativity\n",' ',' ',' ',' ',' ');
    for(int i=0;i<5;i++){
        printf("%2c%-15s| %5c%-12s | %5c%-8d | %5c%-7d | %5c%-7d\n",' ',dep[i].name,' ',dep[i].role,' ',dep[i].communication,' ',dep[i].teamwork,' ',dep[i].creativity);
    }
}
void assign(depart *depart){
    bool role_check[5] = {true,true,true,true,true};
    for(int i=0;i<5;i++){
        strcpy(depart[i].name,names[a]);
        a++;
        int n;
        do{
            n = rand() % 5;
        }while(role_check[n] == false);
        
        strcpy(depart[i].role,roles[n]);
        role_check[n] = false;
        
        depart[i].communication = (rand() % 100) + 1;
        depart[i].teamwork = (rand() % 100) + 1;
        depart[i].creativity = (rand() % 100) + 1;
    }
}
int best_depart(depart *depart){
    int total = 0;
    for(int i=0;i<5;i++){
        total += depart[i].communication + depart[i].teamwork + depart[i].creativity;
    }
    return total;
}


int main(){
    srand(time(0));
    
    depart HR[5];
    depart Finance[5];
    depart Marketing[5];
    depart Logistics[5];
    
    assign(HR);
    assign(Finance);
    assign(Marketing);
    assign(Logistics);
    
    printf("%10c HR DEPARTMENT\n",' ');
    print(HR);
    printf("\n\n%10c FINANCE DEPARTMENT\n",' ');
    print(Finance);
    printf("\n\n%10c MARKETING DEPARTMENT\n",' ');
    print(Marketing);
    printf("\n\n%10c LOGISTICS DEPARTMENT\n",' ');
    print(Logistics);
    
    int max=0, point=0;
        if(best_depart(HR) > max) {
            max = best_depart(HR);
            point = 1;
        }
        if(best_depart(Finance) > max) {
            max = best_depart(Finance);
            point = 2;
        }
        if(best_depart(Marketing) > max) {
            max = best_depart(Marketing);
            point = 3;
        }
        if(best_depart(Logistics) > max){
             max = best_depart(Logistics);
             point =4;
        }
        
        printf("\n\n%10cBEST DEPARTMENT %10c maximum value = %d\n",' ',' ',max);
        switch(point){
            case 1:
            print(HR);
            break;
            
            case 2:
            print(Finance);
            break;
            case 3:
            print(Marketing);
            break;
            case 4:
            print(Logistics);
            break;
        }
        
    
}//end main
