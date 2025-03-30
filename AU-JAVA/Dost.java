import java.util.Scanner;
public class Dost {
  public static void main(String[] args){
    System.out.println("Welcome to the Ganesh Temple!");
    System.out.println("Please choose one button :1,2,3");
    Scanner input = new Scanner(System.in);
   
    int button = input.nextInt();

    if (button == 1) {
      System.out.println("🌼🌼SHREE RADHE KRISHNA🌼🌼"); 
      
    } 
    else if (button == 2) {
      System.out.println("JAI JAGANNATH🙏🙏");
      }
      else if (button == 3) {
        System.out.println("KHAMBA 😊 GADI"); 
        
      } 
      else { System.out.println("PRABHU KAISE HO🙄🙄");
      }
      input.close();
  }
}
