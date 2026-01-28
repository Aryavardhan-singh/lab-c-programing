

//Write a C program to simulate an ATM with options:
// 1. Check Balance
// 2. Deposit
// 3. Withdraw
// 4. Exit
// Use a switch case to handle operations and display balance after each transaction.


# include <stdio.h>
int main (){
int choice ;
float balance = 100 ;
float amount ;

printf ("welcome to the ARYAN'S BANK ATM ........\n" );

while (1) {
printf("\n1. CHECK THE BALANCE \n");
printf("2. DEPOSIT \n");
printf("3. WITHDRAW \n");
printf("4. EXIT \n");
printf("ENTER YOUR CHOICE : ");
scanf("%d" , &choice);

switch (choice){
    case 1:
    printf("Your current balance is : %.2f/n", balance );
    break;
    case 2 : 
    printf ("Enter the amount of deposit : ");
    scanf ("%f", &amount);
    if (amount >0) {
        balance += amount ;
        printf("successfully deposit the amount and new balace is : %.2f ", balance );
    } 
    else {
        printf("invalid amount ! \n ");
        
    }
    break ;
    case 3 :
    printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient funds! Your balance is $%.2f\n", balance);
                } else if (amount <= 0) {
                    printf("Invalid amount!\n");
                } else {
                    balance -= amount;
                    printf("Successfully withdrew $%.2f. New balance: $%.2f\n", amount, balance);
                }
                break;

            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0; // Exit the program

            default:
                printf("Invalid choice! Please select a valid option.\n");
            }
        }
    

    return 0;
}

   



