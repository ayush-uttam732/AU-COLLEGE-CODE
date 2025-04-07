import java.util.Scanner;
public class A{
    public static void main(String[] args) {
        int n;
        System.out.println("Enter a number:");
        Scanner obj=new Scanner(System.in);
        n=obj.nextInt();
        System.out.println("N is : "+n);
        if(n%2==0){
            System.out.println("N is even");
        }
        else{
            System.out.println("N is odd");
        }
        System.out.println("N is : "+n);
};