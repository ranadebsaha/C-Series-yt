#include<stdio.h>
#include<string.h>
void main(){
char string[50];
printf("Enter your String: ");
gets(string);
int low,high;
low=0;
high=strlen(string)-1;
while(low<high){
    if(string[low]!=string[high]){
        printf("This is not a Palindrome String");
        return;
    }
    low++;
    high--;
}
printf("This is a Palindrome String");
}