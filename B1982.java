import java.util.Scanner;

public class B1982 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n-- > 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int k = sc.nextInt();

                while(k-->0){
                    x++;
                    while (x % y == 0) {
                        x = x / y;
                    }
                }

            System.out.println(x);

        }
    }
}
