
#include <stdio.h>
#include <stdlib.h>

void uni_array_print(void* ptr,unsigned int size,int datatype);
int main() {
    unsigned int datatype,size;
    
    void *ptr;
    
    printf("enter datatype of array \nenter 1 for int\nenter 2 for float\nenter 3 for char :");
    scanf("%d",&datatype);
     printf("enter no of elements: ");
  scanf("%d",&size);
    switch(datatype) {
        case 1:
         ptr=calloc(size,sizeof(int));
         int *ptr1=(int*)ptr;
         for(int i=0;i<size;i++) {
             scanf("%d",(ptr1+i));
         }
        break;
         case 2:
         ptr=calloc(size,sizeof(int));
         float *ptr2=(float*)ptr;
         for(int i=0;i<size;i++) {
             scanf("%f",(ptr2+i));
         }
        break;
         case 3:
          ptr=calloc(size,sizeof(int));
         char *ptr3=(char*)ptr;
         for(int i=0;i<size;i++) {
             scanf(" %c",(ptr3+i));
         }
        break;
        default:
        printf("invalid datatype choice");
    }
    uni_array_print(ptr,size,datatype);

free(ptr);
}//endmain

void uni_array_print(void* ptr, unsigned int size, int datatype) {
    if (datatype == 1) {
        int* intPtr = (int*)ptr;
        for (int i = 0; i < size; i++) {
            printf("%d ", *(intPtr + i));
        }
    }

    if (datatype == 2) {
        float* floatPtr = (float*)ptr;
        for (int i = 0; i < size; i++) {
            printf("%f ", *(floatPtr + i));
        }
    }

    if (datatype == 3) {
        char* charPtr = (char*)ptr;
        for (int i = 0; i < size; i++) {
            printf("%c ", *(charPtr + i));
        }
    }
}
