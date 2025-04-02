import java.util.Scanner;
public class addTwoNum {
    public static void main(String[] args){
        int num1, num2, sum;
        System.out.println("Enter two numbers : ");
        Scanner obj = new Scanner(System.in);
        num1 = obj.nextInt();
        num2 = obj.nextInt();
        sum = num1 + num2;
        System.out.println("The sum of the two numbers is : " + sum);
    }
    
};
