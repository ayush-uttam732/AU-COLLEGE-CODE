import java.util.Scanner;

public class allOdd1To10 {
    public static void main(String[] args){
        int i;
        System.out.println("The odd numbers from 1 to 10 are : ");
        for (i = 1; i <= 10; i++){
            if (i % 2 != 0){
                System.out.print(i + " ");
            }
        }
    }
}