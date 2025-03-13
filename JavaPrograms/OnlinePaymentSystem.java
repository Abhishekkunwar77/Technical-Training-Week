abstract class Payment {
    protected double amount;
    protected String payerName;

    public Payment(double amount, String payerName) {
        this.amount = amount;
        this.payerName = payerName;
    }

    public abstract void processPayment();
}

class CreditCardPayment extends Payment {

    public CreditCardPayment(double amount, String payerName) {
        super(amount, payerName);
    }

    @Override
    public void processPayment() {
        System.out.println("Processing credit card payment of $" + amount + " for " + payerName);
    }
}

class PayPalPayment extends Payment {

    public PayPalPayment(double amount, String payerName) {
        super(amount, payerName);
    }

    @Override
    public void processPayment() {
        System.out.println("Processing PayPal payment of $" + amount + " for " + payerName);
    }
}

class BankTransferPayment extends Payment {

    public BankTransferPayment(double amount, String payerName) {
        super(amount, payerName);
    }

    @Override
    public void processPayment() {
        System.out.println("Processing bank transfer payment of $" + amount + " for " + payerName);
    }
}

public class OnlinePaymentSystem {
    public static void main(String[] args) {
        Payment creditCardPayment = new CreditCardPayment(200.0, "John Doe");
        Payment payPalPayment = new PayPalPayment(150.0, "Alice Smith");
        Payment bankTransferPayment = new BankTransferPayment(300.0, "Bob Johnson");
        creditCardPayment.processPayment();
        payPalPayment.processPayment();
        bankTransferPayment.processPayment();
    }
}