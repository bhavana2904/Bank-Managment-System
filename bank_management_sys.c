#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct bank_account{
    int no;
    char name[100];
    char branch[100];
    int bno;
    int balance;

};
struct bank_account a1;

void create() {
    printf("Enter Account number: ");
    scanf("%d",&a1.no);
    printf("Enter Name: ");
    scanf("%s",a1.name);
    printf("Enter Branch Name: ");
    scanf("%s",a1.branch);
    printf("Enter Branch number: ");
    scanf("%d",&a1.bno);
    printf("Enter money balance: ");
    scanf("%d",&a1.balance);
}
void details() {
    printf("Account Number: %d\n", a1.no);
    printf("Name: %s\n", a1.name);
    printf("Branch Name: %s\n", a1.branch);
    printf("Branch number: %d\n", a1.bno);
    printf("Money balance: %d\n", a1.balance);
}
void deposit() {
    int amt;
    printf("Enter amount for deposit: \n");
    scanf("%d",&amt);
    if (amt<0) {
        printf("Invalid");
    }else{
        a1.balance=a1.balance+amt;
    }
}
void withdraw() {
    int amt;
    printf("Enter amount for withdraw: \n");
    scanf("%d",&amt);
    if (amt<0) {
        printf("Invalid");
    }else if (amt>a1.balance) {
        printf("Invalid");
    }
    else{
        a1.balance = a1.balance-amt;
    }
}
void checkbalance() {
    printf("Balance: %d",a1.balance);
}

int main() {
    int n,no;

    printf("------------ATM BANKING MANAGEMENT SYSTEM------------\n");
    printf("\t\t1 Create Account\n");
    printf("\t\t2 Account Details\n");
    printf("\t\t3 Deposit Money\n");
    printf("\t\t4 Withdrawal Money\n");
    printf("\t\t5 Check Balance\n");
    printf("\t\t6 Exit\n");
    printf("-----------------------------------------------------\n");
    
    do{
    printf("Enter choice (Should be number from 1-6): ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:create();break;
    case 2:details();break;
    case 3:deposit();break;
    case 4:withdraw();break;
    case 5:checkbalance();break;
    case 6:break;
    default:printf("Invalid choice");
    }
    }while(n!=6);
    return 0;
}