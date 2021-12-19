#include<stdio.h>

int main() {
    int i, a[20], sub, choice;
    char res;
    printf("\t<---- Marks of a student using array ---->\t\n");
    //Taking Marks from User
    printf("Enter number of subjects: ");
    scanf("%d",&sub);
    for(i=0;i<sub;i++) {
        printf("Enter marks of subject %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Do you want to continue: ");
    scanf("%c",&res);
    res=getchar();
    //Menu Program
    while(res=='Y' || res=='y') {
        printf("1)Show Marks\n2)Update Marks\n3)Delete Marks\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1) {
            for(i=0;i<sub;i++) {
                printf("Marks of subject %d is: %d\n",i+1,a[i]);
            }
        }
        else if(choice==2) {
            printf("Enter subject number you want to change marks of: ");
            scanf("%d",&i);
            printf("Enter new marks of subject %d: ",i);
            scanf("%d",&a[i-1]);
            printf("New Marks are: \n");
            for(i=0;i<sub;i++) {
                printf("Marks of subject %d is: %d\n",i+1,a[i]);
            }
        }
        else if(choice==3) {
            printf("Enter subject number you want to delete marks of: ");
            scanf("%d",&i);
            a[i-1]=0;
            printf("New/Updated Marks are: \n");
            for(i=0;i<sub;i++) {
                printf("Marks of subject %d is: %d\n",i+1,a[i]);
            }
        }
        else {
            printf("Enter Valid Response: ");
        }
        printf("\nPress Y to continue: ");
        scanf("%c",&res);
        res=getchar();   
    }
    return 0;
}