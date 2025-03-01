import java.util.HashMap;
import java.util.Scanner;

public class B1989 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while (n-- > 0) {
            String a = sc.nextLine();
            String b = sc.nextLine();
            HashMap<Character, Integer> mapA = new HashMap<>();
            HashMap<Character, Integer> mapB = new HashMap<>();
            for (int i = 0; i < a.length(); i++) {
                char c = a.charAt(i);
                mapA.put(c, mapA.getOrDefault(c, 0)+1);
                mapB.put(c, mapA.getOrDefault(c, 0)+1);

            }
            for (int i = 0; i < a.length(); i++) {
                char c = a.charAt(i);
                mapB.put(c, mapB.getOrDefault(c, 0)+1);
            }


        }
    }
}
