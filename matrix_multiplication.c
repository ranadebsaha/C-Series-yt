// [1 2]    [1 2]
// [3 4]    [3 4]
// =(1*1+2*3 1*2+2*4)
//  (3*1+4*3 3*2+4*4)
#include<stdio.h>
void main(){
    int r,c,i,j,k;
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
            arr3[i][j]=0;
            for(k=0;k<c;k++){
                arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
            }
        }
    }
    printf("After Multiplication The Matrix is: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        printf("%d  ",arr3[i][j]);
        }
        printf("\n");
    }
}