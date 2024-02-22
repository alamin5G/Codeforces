import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
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
        ArrayList<Integer> array = new ArrayList<>();
        array.addAll(Arrays.asList(a, b, c));
        Collections.sort(array);

        return array.get(1);
    }
}
