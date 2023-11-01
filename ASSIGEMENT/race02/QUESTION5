#include <stdio.h>

int main (){
    int n;
    printf ("Enter the number you want the ramanujans number upto: ");
    scanf ("%d",&n);
    printf ("The ramanujan numbers uptill %d are as follows:",n);
    n = n*n*n;
    int i,j, ram_no,k ,l;
         for (i=1; i<n; i++){
             for (j=i; j<n ; j++){
                  for (k=i; k < n ; k++){
                      for (l=k ; l<n ; l++){
                        ram_no = (i*i*i)+(j*j*j);
                          if ((j != i) && (k != l) && (k != i) && (l != j) && (ram_no > n) ){ 
                                 if (((k*k*k)+(l*l*l)) == ((i*i*i)+(j*j*j))){
                                  printf ("%d, ", ram_no);
                                 }
                          }   
                     }                 
                 }
             }
         } 
        
return 0;
}
