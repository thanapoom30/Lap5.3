#include <stdio.h>
#include <math.h>
int main() {
    int Choice ;
    float n1, n2, ans;
    printf("1. Add (+)\n");
    printf("2. Subtract (-)\n");
    printf("3. Multiply (*)\n");
    printf("4. Divide (/)\n");
    printf("5. Modulo (%%)\n");
    printf("Enter Number 1: ");
    scanf("%f",&n1);
    printf("Enter Number 2: ");
    scanf("%f",&n2);
    printf("Select Choice :");
    scanf("%d", &Choice );
    switch(Choice)
    {
        case 1:
            printf("%.2f + %.2f = %.2f",n1, n2, n1+n2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f",n1, n2, n1-n2);
            break;
        case 3:
            printf("%.2f * %.2f = %.2f",n1, n2, n1*n2);
            break;
        case 4: ans=n1/n2;
            if (n2 == 0)
            printf("Divide by Zero!!!\n");
        else
		    printf("%.2f / %.2f = %.0f",n1, n2,ans);
            break;           
        case 5: ans=fmod(n1, n2);
            printf("%.2f %% %.2f = %.0f",n1, n2,ans);
            break; 
        default:
            printf("Error! choice is not correct");
    }
    return 0;
}