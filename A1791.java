import java.util.Arrays;
import java.util.Scanner;

public class A1791 {
    
    public static void main(String[] args) {
        String st = "codeforces";
        char[] ch = st.toCharArray();
        Arrays.sort(ch);
        
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        
        while (t != 0) {
            char c = input.next().charAt(0);
            boolean returned = hasFound(ch, c);
            if (returned) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
            t--;
        }

       
    }

    private static boolean hasFound(char[] ch, char c) {
        
         //now will implements the binary search
         //to reduce the search terms
         //we can do a linear search instead of binary
         
         int high = ch.length-1;
         int low = 0;
 
         while (low<=high) {
             int mid = (low+high)/2;
             if (c == ch[mid]) {
                return true;
             }else if (c < ch[mid]) {
                high = mid -1;
             }else{
                low = mid + 1;
             }
         }
 
        return false;
    }
}
