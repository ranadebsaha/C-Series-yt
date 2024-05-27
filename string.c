#include<stdio.h>
#include<string.h>
void main(){
char string[50];
int i;
printf("Enter your String: ");
gets(string);
printf("Your String is: ");
for(i=0;i<strlen(string);i++){
    printf("%c",string[i]);
}
}