#include <stdio.h>
#include <math.h>      // header file for advanced math functions

int main() {
    
int choice;
double num1, num2, result;

    printf("Simple Scientific Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Exponentiation\n");
    printf("7. Logarithm (base 10)\n");
    printf("Enter your choice (1-7): \n ");
   
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2lf+ %.2lf = %.2lf\n", num1,num2,result);
            break;
        
           case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2,result);
            break;
      
            case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
       
            case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
     
            case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1 >= 0) {
           result = sqrt(num1);
                printf("Result: sqrt(%.2lf) = %.2lf\n", num1, result);
            } 
            else {
                printf("Error: Square root of a negative number is not allowed.\n");
            }
            break;
     
            case 6:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
            break;
    
     
            case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            if (num1>0) 
            {
               result = log10(num1);
                printf("Result: log10(%.2lf) = %.2lf\n", num1, result);
            } else 
            {
                printf("Error: Logarithm of a non-positive number is not allowed.\n");
            }
            break;
    
        default:
            printf("Error: Invalid choice. \n");
            break;
    }

    return 0;
}