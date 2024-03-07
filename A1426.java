import java.util.Scanner;

/**
 * A1426
 */
public class A1426 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t!=0) {
            int a = input.nextInt();
            int b = input.nextInt();

            int floor = Math.min(a, b);

            System.out.println(floor);

            t--;
        }
    }
}