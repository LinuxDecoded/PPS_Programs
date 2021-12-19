#include<stdio.h>
#include<string.h>

int main() {
    int size, pos;
    char replc, a[10], b[10];
    //Finding size of array
    size = sizeof(a)/sizeof(a[0]);
    printf("Length of array is %d\n", size);
    //Array Input
    printf("Enter a string: ");
    scanf("%[^\n]s", &a);
    printf("Your entered string is: %s\n",a);
    printf("Enter the postion you want replace: ");
    scanf("%d",&pos);
    if(pos<=size) {
        printf("Enter new alphabet: ");
        scanf("%c",&replc);
        replc=getchar();
        printf("Entered alphabet: %c\n",replc);
        a[pos-1] = replc;
        printf("New String is : %s\n",a);
        printf("Enter new string: ");
        scanf("%s",&b);
        getchar();
        printf("New String: %s\n",b);
        strcat(a,b);
        printf("New Value of first string is: %s\n",a);
    }
    else {
        printf("Invalid position entered!!");
    }

    return 0;
}