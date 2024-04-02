import java.util.Scanner;

public class A1850 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        while (n!=0) {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();

            if(a+b>=10 || a+c>=10 || b+c>=10){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
            n--;
        }
    }
}
