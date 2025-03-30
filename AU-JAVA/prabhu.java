import java.util.Scanner;

public class prabhu{ 
    public static void main(String[] args) {
        System.out.println("Welcome to the KHATU DHAM🙏 (Temple of Wishes)🙏!");
        System.out.println("Choose what you want to ask from BABA🙂");
        System.out.println("1 - Shanti\n2 - Niswarth Prem\n3 - Simplicity\n4 - Good Deeds\n5 - Buddhi\n6 - Bhakti");
        
        Scanner input = new Scanner(System.in);
        int wish = input.nextInt();
        
        switch (wish) {
            case 1:
                System.out.println("Man ki shanti sarvopari hai!☮");
                break;
            case 2:
                System.out.println("❣Niswarth prem❣ aapki ananta ko dikhata hai!");
                break;
            case 3:
                System.out.println("Simplicity aapke jeevan ko saral karti hai🙃 (shayad ek accha insaan banne ka mauka)!🙃");
                break;
            case 4:
                System.out.println("Aapka kiya gaya sabse chhota dayalu karya aapki sabse badi iccha se adhik mulyavan hota hai! 💛");
                break;
            case 5:
                System.out.println("Jo yatharth vastu ko dikhaye 🕉, buddhi wahi hai!");
                break;
            case 6:
                System.out.println("Kisi ke prati khud ka samarpan💖 hi bhakti hai");
                break;
            default:
                System.out.println("😇 Jo mila use BABA ki kripa maan lo, aur jo khoya use BABA ki marzi jaan lo😇");
        }
        
        input.close();
    }
}