public class detailEmployee{
    public String name;
    public int employeeId;
    public double salary;

    public detailEmployee(String name, int employeeId, double salary) {
        this.name = name;
        this.employeeId = employeeId;
        this.salary = salary;
    }

    public void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Salary: " + salary);
    }
}

public class detailEmployee {
    public static void main(String[] args) {
        Manager manager = new Manager("Alice", 101, 75000, "HR");
        manager.displayDetails();
    }
}
class Manager extends detailEmployee {
    public String department;

    public Manager(String name, int employeeId, double salary, String department) {
        super(name, employeeId, salary);
        this.department = department;
    }

    @Override
    public void displayDetails() {
        super.displayDetails();
        System.out.println("Department: " + department);
    }
}


