import java.util.Scanner;
public class nNnaturalNum {
    public static void main(String[] args){
        int n, i;
        System.out.println("Enter a number : ");
        Scanner obj = new Scanner(System.in);
        n = obj.nextInt();
        System.out.println("The first " + n + " natural numbers are : ");
        for (i = 1; i <= n; i++){
            System.out.print(i + " ");
        }
    }
};