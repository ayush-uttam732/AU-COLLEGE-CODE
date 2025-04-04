
public class D{
    public void display() {
        System.out.println("Hello from class A!");
    }
};
public class C {
    public static void main(String[] args) {
        // C is in the same package as A, so it can be accessed directly
        D a = new D(); // A is in the same package, so it can be accessed directly
        a.display(); // This will call the display method from class A
    }
}