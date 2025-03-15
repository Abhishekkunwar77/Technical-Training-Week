import java.time.LocalDate;

// Base class for customer orders
class CustomerOrder {
    protected String orderId;
    protected String customerName;
    protected LocalDate orderDate;

    public CustomerOrder(String orderId, String customerName, LocalDate orderDate) {
        this.orderId = orderId;
        this.customerName = customerName;
        this.orderDate = orderDate;
    }

    public void displayOrderDetails() {
        System.out.println("Order ID: " + orderId);
        System.out.println("Customer: " + customerName);
        System.out.println("Order Date: " + orderDate);
    }
}

// Subclass for online orders with additional details
class OnlineOrder extends CustomerOrder {
    private String deliveryAddress;
    private String trackingNumber;
    private String trackingStatus;

    public OnlineOrder(String orderId, String customerName, LocalDate orderDate, String deliveryAddress,
            String trackingNumber) {
        super(orderId, customerName, orderDate);
        this.deliveryAddress = deliveryAddress;
        this.trackingNumber = trackingNumber;
        this.trackingStatus = "Pending"; // Default status
    }

    @Override
    public void displayOrderDetails() {
        super.displayOrderDetails();
        System.out.println("Delivery Address: " + deliveryAddress);
        System.out.println("Tracking Number: " + trackingNumber);
        System.out.println("Tracking Number: " + trackingNumber + " - Status: " + trackingStatus);
    }

    public int calculateDeliveryTime() {
        return 8; // Fixed estimated delivery time for simplicity
    }

    public void updateTrackingStatus(String status) {
        this.trackingStatus = status;
        System.out.println("Tracking Number: " + trackingNumber + " - Status: " + trackingStatus);
    }
}

// Main class to run the program
public class OrderManagement {
    public static void main(String[] args) {
        CustomerOrder order = new CustomerOrder("ORD023", "Asih Wanjiku", LocalDate.now());
        order.displayOrderDetails();
        System.out.println();

        OnlineOrder onlineOrder = new OnlineOrder("ORD034", "Kai Biserka", LocalDate.now(),
                "123 ABC Street, Springfield", "STR455");
        onlineOrder.displayOrderDetails();
        int deliveryTime = onlineOrder.calculateDeliveryTime();
        System.out.println("Estimated Delivery Time: " + deliveryTime + " days");
        onlineOrder.updateTrackingStatus("In Transit");
    }
}