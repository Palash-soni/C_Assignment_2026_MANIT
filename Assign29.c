// WAP using switchcase to implement basic features of ATM menu
#include <stdio.h>
int main()
{
    int choice;
    float balance = 1000.0, amount;
    while (1)
    {
        printf("\n \nWelcome to the ATM!\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Your current balance is: ₹%.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ₹");
            scanf("%f", &amount);
            if (amount > 0)
            {
                balance += amount;
                printf("Successfully deposited ₹%.2f. New balance: ₹%.2f\n", amount, balance);
            }
            else
            {
                printf("Invalid deposit amount.\n");
            }
            break;
        case 3:
            printf("Enter amount to withdraw: ₹");
            scanf("%f", &amount);
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                printf("Successfully withdrew ₹%.2f. New balance: ₹%.2f\n", amount, balance);
            }
            else if (amount > balance)
            {
                printf("Insufficient funds.\n");
            }
            else
            {
                printf("Invalid withdrawal amount.\n");
            }
            break;
        case 4:
            printf("Thank you for using the ATM. Goodbye!\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Output :

// Welcome to the ATM!
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit

// Enter your choice: 1
// Your current balance is: ₹1000.00

// Welcome to the ATM!
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit

// Enter your choice: 2
// Enter amount to deposit: ₹100
// Successfully deposited ₹100.00. New balance: ₹1100.00

// Welcome to the ATM!
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit

// Enter your choice: 3
// Enter amount to withdraw: ₹100
// Successfully withdrew ₹100.00. New balance: ₹1000.00

// Welcome to the ATM!
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit

// Enter your choice: 4
// Thank you for using the ATM. Goodbye!9