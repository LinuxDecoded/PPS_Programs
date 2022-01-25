#include<stdio.h>

int main() {
    char a[50][50];
    int i, j;
    for(i=0;i<10;i++) {
        for(j=0;j<21;j+=2) {
            a[i][j]='*';
            a[i][j+1]=' ';
            if(j==20) {
                a[i][j]='\n';
            }
        }
    }
    for(i=0;i<10;i++) {
        for(j=0;j<21;j++) {
            printf("%c",a[i][j]);
        }
    }   
}