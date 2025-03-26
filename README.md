# Bank-Managment-System

A lightweight, terminal-based banking application written in C that simulates core financial operations with secure transaction handling.

## ✨ Key Features

| Feature          | Description                                                                 |
|------------------|----------------------------------------------------------------------------|
| **Account Creation** | Set up new accounts with unique IDs and customer details                   |
| **Deposits**       | Add funds with amount validation                                           |
| **Withdrawals**    | Remove funds with balance-checking safeguards                              |
| **Balance Inquiry** | Instant account balance overview                                           |
| **Account Summary** | View complete account details in clean console format                      |

## 🛠️ Technical Implementation
```c
struct bank_account {
    int no;
    char name[100];
    char branch[100];
    int balance; 
}; // Memory-efficient data modeling

