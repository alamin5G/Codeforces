import java.util.Scanner;
import java.util.Stack;

/**
 * A1619
 */
public class A1619 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();

        while (t!=0) {
            String s = input.nextLine();
            int len = s.length();
            boolean flag = true;
            if (len>1 && len%2 == 0) {
                Stack<Character> st = new Stack<>();
                for (int i = (s.length()/2)-1; i >=0 ; i--) {
                    st.push(s.charAt(i));
                }

                for (int i = (s.length()/2); i < s.length(); i++) {
                    if (s.charAt(i) != st.pop()) {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
            }else{
                System.out.println("NO");
            }
            

            t--;
        }
    }
}