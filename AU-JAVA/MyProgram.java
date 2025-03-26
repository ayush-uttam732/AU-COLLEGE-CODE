public class MyProgram {
    private String name;

    public MyProgram(String name) {
        this.name = name;
    }

    public void greet() {
        System.out.println("Hello, " + name + "!");
    }

    public static void main(String[] args) {
        MyProgram myObject = new MyProgram("John Dee");
        myObject.greet();
    }
}
