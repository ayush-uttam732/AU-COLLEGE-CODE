import java.util.Scanner;
 
public class greatestNum{
    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the first number : ");
        int num1 = obj.nextInt();
        System.out.println("Enter the second number : ");
        int num2 = obj.nextInt();
        System.out.println("Enter the third number : ");
        int num3 = obj.nextInt();
        if (num1 > num2 && num1 > num3)
            System.out.println("The first number is the greatest : " + num1);
        else if (num2 > num1 && num2 > num3)
            System.out.println("The second number is the greatest : " + num2);
        else if (num3 > num1 && num3 > num2)
            System.out.println("The third number is the greatest : " + num3);
        else
            System.out.println("All numbers are equal .");
    }
}