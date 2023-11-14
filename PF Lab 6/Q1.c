#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void displayMenu(){
printf("Select an operation to perform the calculation in C Calculator:\n1 Addition         2 Subtraction\n3 Multiplication   4 Division\n5 Square           6 Square Root\n7 Ceil             8 Floor\n9 Exit\n\nPlease, Make a choice ");

}

bool isInRange(int choice){
    if(choice>=1 && choice<=9){
        return true;
    }
    return false;
    }

double addition(double num1, double num2){
    double num3 = num1 + num2;
    return num3;
}

double subtraction(double num1, double num2){
    double num3 = num1 - num2;
    return num3;
}

double multiplication(double num1, double num2){
    double num3 = num1 * num2;
    return num3;
}

double division(double num1, double num2){
    while(num2 == 0){
        printf("Error. Divisor can't be zero, Enter again: ");
        scanf("%lf",&num2);
    }
    return num1/num2;
}

double square(double num1){
    return pow(num1,2);
    //can use num3=num1*num1 also here.
}

double squareroot(double num1){
    if (num1<0){
        printf("The square root is a complex number.\n");
    }
    return sqrt(num1);
}

double ceilnum(double num1){
    return ceil(num1);
}

double floornum(double num1){
    return floor(num1);
}

void CalcUseAgain(){
    int choice;
    displayMenu();
        scanf("%d",&choice);

        bool verify = isInRange(choice);
        while(!verify){
            printf("Invalid Choice, Input again: ");
            scanf("%d", &choice);
            verify = isInRange(choice);
        }
        
        double num1,num2,num,num3;
            switch(choice){
            
            case 1:
            printf("You chose: Addition\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            printf("Enter Number: ");
            scanf("%lf", &num2);
            num3 = addition(num1,num2);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            displayMenu();
            scanf("%d",&choice);
            break;
            
            case 2:
            printf("You chose: Subtraction\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            printf("Enter Number: ");
            scanf("%lf", &num2);
            num3 = subtraction(num1,num2);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            displayMenu();
            scanf("%d",&choice);
            break;
            
            case 3:
            printf("You chose: Multiplication\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            printf("Enter Number: ");
            scanf("%lf", &num2);
            num3 = multiplication(num1,num2);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            displayMenu();
            scanf("%d",&choice);
            break;
            
            case 4:
            printf("You chose: Division\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            printf("Enter Number: ");
            scanf("%lf", &num2);
            num3 = division(num1,num2);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            displayMenu();
            scanf("%d",&choice);
            break;
            
            case 5:
            printf("You chose: Square\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            num3 = square(num1);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            displayMenu();
            scanf("%d",&choice);
            break;
            
            case 6:
            printf("You chose: Square Root\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            num3 = squareroot(num1);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            displayMenu();
            scanf("%d",&choice);
            break;
            
            case 7:
            printf("You chose: Ceil\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            num3 = ceil(num1);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            displayMenu();
            scanf("%d",&choice);
            break;
            
            case 8:
            printf("You chose: Floor\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            num3 = floor(num1);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            displayMenu();
            scanf("%d",&choice);
            break;
            
            case 9:
            printf("You chose: Exit\n");
            break;
            }
}
    int main(){
        int choice;
    displayMenu();
        scanf("%d",&choice);

        bool verify = isInRange(choice);
        while(!verify){
            printf("Invalid Choice, Input again: ");
            scanf("%d", &choice);
            verify = isInRange(choice);
        }
        
        double num1,num2,num,num3;
            switch(choice){
            
            case 1:
            printf("You chose: Addition\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            printf("Enter Number: ");
            scanf("%lf", &num2);
            num3 = addition(num1,num2);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            CalcUseAgain();
            break;
            
            case 2:
            printf("You chose: Subtraction\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            printf("Enter Number: ");
            scanf("%lf", &num2);
            num3 = subtraction(num1,num2);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            CalcUseAgain();
            break;
            
            case 3:
            printf("You chose: Multiplication\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            printf("Enter Number: ");
            scanf("%lf", &num2);
            num3 = multiplication(num1,num2);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            CalcUseAgain();
            break;
            
            case 4:
            printf("You chose: Division\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            printf("Enter Number: ");
            scanf("%lf", &num2);
            num3 = division(num1,num2);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            CalcUseAgain();
            break;
            
            case 5:
            printf("You chose: Square\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            num3 = square(num1);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            CalcUseAgain();
            break;
            
            case 6:
            printf("You chose: Square Root\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            num3 = squareroot(num1);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            CalcUseAgain();
            break;
            
            case 7:
            printf("You chose: Ceil\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            num3 = ceil(num1);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            CalcUseAgain();
            break;
            
            case 8:
            printf("You chose: Floor\n");
            printf("Enter Number: ");
            scanf("%lf", &num1);
            num3 = floor(num1);
            printf("%.2lf\n",num3);
            printf("\n");
            printf("*******************************************\n");
            CalcUseAgain();
            break;
            
            case 9:
            printf("You chose: Exit\n");
            break;
            }
    return 0;
}
