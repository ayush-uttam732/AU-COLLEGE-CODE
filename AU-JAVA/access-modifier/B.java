// PUBLIC ACCESS MODIFIER ...

class A{
    public void display() {
        System.out.println("Hello from class A!");
    }
}


class B{
    public static void main(String[] args) {
        A a = new A(); // A is in the same package, so it can be accessed directly
        a.display(); // This will call the display method from class A
    }
}