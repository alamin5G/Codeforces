import java.util.Scanner;

/**
 * A1873
 */
public class A1873 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        while (t != 0) {
            String s = input.nextLine();

            boolean b = isSwapPossible(s);

            if (b) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
 
            t--;
        }
    }

    private static boolean isSwapPossible(String s) {
        if (s.equals("abc")) {
            return true;
        }else if (s.charAt(0) == 'a') {
            return true;
        }else if (s.charAt(1) == 'b') {
            return true;
        }else if (s.charAt(2) == 'c') {
            return true;
        }

        return false;
    }
}