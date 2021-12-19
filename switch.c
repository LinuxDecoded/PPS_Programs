#include<stdio.h>

int main() {
    float a, b, result;
    char c, res;
    printf("\t<---- Simple Calculator using Switch ---->\t\n\n");
    printf("Press Y to continue: ");
    scanf("%c",&res);
    while(res=='y' || res=='Y') {
        printf("Addition(+)\nSubstraction(-)\nMultiplication(*)\nDivision(/)\n\n");
        printf("Enter First number: ");
        scanf("%f", &a);
        printf("Enter operator: ");
        scanf("%c",&c);
        c=getchar();
        printf("Enter Second number: ");
        scanf("%f", &b);
        switch(c) {
            case '+': result=a+b;
                      printf("\nAddition of %f and %f is: %f\n",a,b,result);
                      break;
            case '-': result=a-b;
                      printf("\nSubstraction of %f and %f is: %f\n",a,b,result);
                      break;
            case '*': result=a*b;
                      printf("\nMultiplication of %f and %f is: %f\n",a,b,result);
                      break;
            case '/': result=a/b;
                      printf("\nDivision of %f and %f is: %f\n",a,b,result);
                      break;
            default:  printf("\nInvalid Operator Entered!!\n");
                      break; 
        }
        printf("\nPress Y to continue: ");
        scanf("%c",&res);
        res=getchar();
    }
    
    return 0;
}
