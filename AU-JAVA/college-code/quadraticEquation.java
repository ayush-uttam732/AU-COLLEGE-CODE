import java.util.Scanner;
public class quadraticEquation {
    public static void main(String[] args) {
        Scanner obj= new Scanner(System.in);
        double a, b, c, d, r1, r2;
        System.out.println("Enter the values of a, b and c : ");
        a = obj.nextDouble();
        b = obj.nextDouble();
        c = obj.nextDouble();
        d = (b * b) - (4 * a * c);
        if(d > 0){
            r1 = ((-b) + Math.sqrt(d)) / (2 * a);
            r2 = ((-b) - Math.sqrt(d)) / (2 * a);
            System.out.println("The roots are real and distinct.");
            System.out.println("Root 1: " + r1);
            System.out.println("Root 2: " + r2);
        }
        else if(d == 0){
            r1 = r2 = (-b) / (2 * a);
            System.out.println("The roots are real and equal.");
            System.out.println("Root 1: " + r1);
            System.out.println("Root 2: " + r2);
        }
        else{
            double realPart = -b / (2 * a);
            double imaginaryPart = Math.sqrt(-d) / (2 * a);
            System.out.println("The roots are complex and different.");
            System.out.println("Root 1: " + realPart + " + " + imaginaryPart + "i");
            System.out.println("Root 2: " + realPart + " - " + imaginaryPart + "i");
        }
    }
    
}
