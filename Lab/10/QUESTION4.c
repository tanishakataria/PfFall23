#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lenofword(int i,char *ptr);
void revword(int wordlen,char*ptr,int i);
int main()
{
    char sen[100];
    char *ptr=sen;
   printf("enter your sentence\n");
   gets(sen);
   int len=strlen(sen);
   int i=0;
int wordlen= lenofword(i,sen);
for(int j =0;j<len;j+=wordlen) {
   
   if (sen[j]==' ') {
    j++;
}
     i=j;
       wordlen= lenofword(i,sen);
       revword(wordlen,sen,i);
       
}
    printf("%s",sen);
    return 0;
}
int lenofword(int i,char *ptr) {
    
    int wordlen=0;
    for( i=i;ptr[i]!=' '&&ptr[i]!='\0';i++) {
     wordlen++;
    }
    return wordlen;
}
void revword(int wordlen,char*ptr,int i) {
     for(int k=0;k<wordlen/2;k++ ){
        char temp=*(ptr +i+k);
        *(ptr +i+k)=*(ptr+wordlen-1+i-k);
        *(ptr+wordlen-1+i-k)=temp;
}
}
