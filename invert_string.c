#include<stdio.h>
#include<string.h>
void main(){
    char string[50];
    int i,len;
    printf("Enter a String: ");
    gets(string);
    len=strlen(string);
    printf("The new String is: ");
    for(i=len-1;i>=0;i--){
        printf("%c",string[i]);
    }
}