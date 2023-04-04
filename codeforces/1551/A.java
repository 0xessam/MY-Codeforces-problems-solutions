
import java.util.Scanner;




 public class Main {
    public static void main(String[] args) {
        Scanner cin=  new Scanner (System.in) ;
        int t = cin.nextInt() ;
        while (t-->0) {
            int a = cin.nextInt();
            int b = a % 3;
            if (b == 1)
            System.out.println((a / 3 + b) + " " + (a / 3));
            else if (b==2)
                System.out.println((a / 3 ) + " " + (a / 3+1));
            else System.out.println((a / 3 ) + " " + (a / 3));
        }
    }


}















