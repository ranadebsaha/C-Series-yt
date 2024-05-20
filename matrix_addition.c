#include<stdio.h>
void main(){
    int r,c,i,j;
    printf("Enter Row Size: ");
    scanf("%d",&r);
    printf("Enter Column Size: ");
    scanf("%d",&c);
    int arr1[r][c],arr2[r][c],arr3[r][c];
    printf("Enter 1st Matrix elements one by one: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter 2nd Matrix elements one by one: ");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("After Addition the Matrix is: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d  ",arr3[i][j]);
        }
        printf("\n");
    }
}