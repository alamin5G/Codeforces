import java.util.Arrays;
import java.util.Scanner;

/**
 * A1722
 */
public class A1722 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        String name = "Timur";
        char[] charArr = name.toCharArray();
        Arrays.sort(charArr);
        String nm = new String(charArr);
        while (t != 0) {

            int n = input.nextInt();
            input.nextLine();
            
            String s = input.nextLine();
            char[] charS = s.toCharArray();
            Arrays.sort(charS);
            String cs = new String(charS);
            
            if ((s.length() != n) || name.length() !=n) {
                System.out.println("NO");
            }else if (nm.equals(cs)) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }


            t--;
        }
    }
}