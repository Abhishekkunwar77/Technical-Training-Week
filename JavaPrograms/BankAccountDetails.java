public class BankAccountDetails {
    private int accountNumber;
    private double balance;

    public BankAccountDetails(int accountNumber, double initialBalance) {
        this.accountNumber = accountNumber;
        this.balance = initialBalance;
    }

    public double getBalance() {
        return this.balance;
    }

    public int getAccountNumber() {
        return accountNumber;
    }

    public void deposit(double amount) {
        if (amount > 0) {
            this.balance += amount;
            System.out.println("Deposit Successful. New Balance is: " + this.balance);
        } else {
            System.out.println("Balance must be in positive.");
        }

    }

    public void withdraw(double amount) {
        if (amount > 0) {
            if (this.balance >= amount) {

                this.balance -= amount;
                System.out.println("Withdrawal successful. New balance is : " + this.balance);
            } else {
                System.out.println("Insufficient Balance");
            }
        } else {
            System.out.println("Invalid withdrawal Amount! ");
        }
    }
}

class Main {
    public static void main(String[] args) {
        BankAccountDetails b1 = new BankAccountDetails(55555, 55555);
        System.out.println("Account Balance: " + b1.getBalance());
    }
}