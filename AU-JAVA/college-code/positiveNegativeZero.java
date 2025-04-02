import java.util.Scanner;
public class positiveNegativeZero {
    public static void main(String[] args){
        int number;
        System.out.println("Enter a number : ");
        Scanner obj = new Scanner(System.in);
        number = obj.nextInt();
        if (number > 0){
            System.out.println("The number is positive .");
        }
        else if (number < 0){
            System.out.println("The number is negative .");
        }
        else{
            System.out.println("The number is zero .");
        }
    }
}