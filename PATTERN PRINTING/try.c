#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for (int i=1;i<=row;i++){
        for (int j=1;j<=row+2;j=j+2){
            printf("*");
        }
        printf("\n");
    }
}