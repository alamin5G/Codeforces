import java.util.Scanner;

public class A1760 {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t != 0) {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            
            int medium = findTheMedium(a, b, c);
            System.out.println(medium);

            t--;
        }

    }

    private static int findTheMedium(int a, int b, int c) {
       if (a < b && a < c) {
            if ( b < c) {
                return b;
            }else{
                return c;
            }
       }else if (b < a && b < c) {
            if (a < c) {
                return a;
            }else{
                return c;
            }
       }else if (c < a && c < b) {
            if (a < b) {
                return a;
            }else{
                return b;
            }
       }

       return 0;
    }
}
