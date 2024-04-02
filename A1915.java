import java.util.Scanner;

/**
 * A1915
 */
public class A1915 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t!=0) {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            if (a == b) {
                System.out.println(c);
            }else if (a == c) {
                System.out.println(b);
            }else if (b == c) {
                System.out.println(a);
            }

            t--;
        }
    }
}