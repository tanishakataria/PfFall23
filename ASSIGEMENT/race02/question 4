#include <stdio.h>
void print(int arr[10][10]){
    for(int i =0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1) printf("%d",arr[i][j]);
            else printf(" ");
        }
        printf("\n");
    }
}
int mazetr(char maze[5][5],int vis[5][5] ,int a,int b){
    
    vis[a][b]=1;
    // printf("yes");
    if(maze[a][b+1]=='E'){
        print(vis);
        return;
    }
    
    if(maze[a+1][b]=='O' && vis[a+1][b]==0){
        mazetr(maze,vis,a+1,b);
        
    }
    
    if(maze[a][b+1]=='O'&& vis[a][b+1]==0){
        mazetr(maze,vis,a,b+1);
    }
    
    if(maze[a-1][b] =='O'&& vis[a-1][b]==0){
        mazetr(maze,vis,a-1,b);
    }
    
    if(maze[a][b-1] == 'O'&& vis[a][b-1]==0){
        mazetr(maze,vis,a,b-1);
    }
    // vis[a][b]=0;
}//end mazetraversal

    // for(int i =0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         vis[i][j] = 0;       
    //     }
    // }
int main(){
char maze[5][5] = {
 {'S', 'O', 'O', 'W', 'W'},
 {'O', 'W', 'O', 'O', 'W'},
 {'O', 'W', 'O', 'W', 'O'},
 {'W', 'W', 'O', 'W', 'O'},
 {'W', 'W', 'O', 'E', 'W'} 
};
int x,y;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(maze[i][j] == 'S'){
             x=i;
         y=j;
        }
    }
}
int vis[5][5] = {0};
mazetr(maze,vis,x,y);

}//end main


//below is code of CHATGPT

// #include <stdio.h>

// void print(int arr[10][10]) {
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             if (arr[i][j])
//                 printf("%d", arr[i][j]);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }

// void mazetr(char maze[5][5], int vis[10][10], int a, int b) {
//     vis[a][b] = 1;
//     // printf("Visited cell (%d, %d)\n", a, b);

//     if (maze[a][b + 1] == 'E') {
//         print(vis);
//         return;
//     }

//     if (maze[a + 1][b] == 'O' && !vis[a + 1][b]) {
//         mazetr(maze, vis, a + 1, b);
//     }

//     if (maze[a][b + 1] == 'O' && !vis[a][b + 1]) {
//         mazetr(maze, vis, a, b + 1);
//     }

//     if (maze[a - 1][b] == 'O' && !vis[a - 1][b]) {
//         mazetr(maze, vis, a - 1, b);
//     }

//     if (maze[a][b - 1] == 'O' && !vis[a][b - 1]) {
//         mazetr(maze, vis, a, b - 1);
//     }
// }

// int main() {
//     char maze[5][5] = {
//         {'S', 'O', 'O', 'W', 'W'},
//         {'O', 'W', 'O', 'O', 'W'},
//         {'O', 'W', 'O', 'W', 'O'},
//         {'W', 'W', 'O', 'W', 'O'},
//         {'W', 'W', 'O', 'E', 'W'}};

//     int vis[10][10] = {0}; // Initialize the vis array with 0

//     int x, y;
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             if (maze[i][j] == 'S') {
//                 x = i;
//                 y = j;
//             }
//         }
//     }

//     mazetr(maze, vis, x, y);

//     return 0;
// }
