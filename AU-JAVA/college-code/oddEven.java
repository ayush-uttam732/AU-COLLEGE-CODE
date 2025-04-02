import java.util.Scanner;

public class oddEven {
    public static void main(String[] args){
        int number;
        System.out.println("Eneter a number : ");
        Scanner obj = new Scanner(System.in);
        number = obj.nextInt();
        if (number % 2 == 0){
            System.out.println("The number is even .");
        }
        else{
            System.out.println("The number is odd .");
        }
    }
};
