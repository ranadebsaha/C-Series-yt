#include<stdio.h>
#include<string.h>
void main(){
char a[50],b[50];
int i,al,bl,tl,j;
printf("Enter 1st String: ");
gets(a);
printf("Enter 2nd String: ");
gets(b);
al=strlen(a);
bl=strlen(b);
tl=al+bl;
char s[tl];
for(i=0;i<al;i++){
    s[i]=a[i];
}
for(i=0,j=al;i<bl,j<=tl;i++,j++){
    s[j]=b[i];
}
puts(s);
}