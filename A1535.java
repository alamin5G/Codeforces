import java.util.Scanner;

public class A1535 {

    public static void main(String[] args) {
        int[] arr = new int[4];

        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        while (t != 0) {
            for (int i = 0; i < arr.length; i++) {
                arr[i] = input.nextInt();
            }

            int big1 = Math.max(arr[0], arr[1]);
            int big2 = Math.max(arr[2], arr[3]);

            int small1 = Math.min(arr[0], arr[1]);
            int small2 = Math.min(arr[2], arr[3]);

            if (big1 < small2 || big2 < small1) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }

            t--;

        }

    }

}
