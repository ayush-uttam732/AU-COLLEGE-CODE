import java.util.Scanner;
public class addNaturalNum {
    public static void main(String[] args){
        int n, i, sum = 0;
        System.out.println("Enter a number : ");
        Scanner obj = new Scanner(System.in);
        n = obj.nextInt();
        System.out.println("The first " + n + " natural numbers are : ");
        for (i = 1; i <= n; i++){
            System.out.print(i + " ");
            sum += i;
        }
        System.out.println("\nThe sum of the first " + n + " natural numbers is : " + sum);
    }
    
}
