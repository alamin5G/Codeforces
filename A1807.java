import java.util.Scanner;

public class A1807 {
    public static void main(String[] args) {
        int t;
        Scanner input = new Scanner(System.in);
        t = input.nextInt();
        while (t != 0) {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            if(a+b == c){
                System.out.println("+");
            }else if ((a-b)==c) {
                System.out.println("-");
            }

            t--;
        }
    }
}
