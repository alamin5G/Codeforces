import java.util.Scanner;

public class A1283 {
    public static void main(String[] args) {
        int t;
        Scanner input = new Scanner(System.in);
        t = input.nextInt();
        while (t!=0) {
            int h = input.nextInt();
            int m = input.nextInt();

            int remainingMinutes = 1440-((h*60)+m);
            System.out.println(remainingMinutes);
            t--;
        }
    }
}
