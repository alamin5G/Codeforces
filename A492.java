import java.util.Scanner;

/**
 * A492
 */
public class A492 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        int temp = 0;
        int s = 0;
        int index=1;
        for (int i = 0; i <= n/2; i++) {
            s = s + (i+1);
            temp = temp + s;
            if (temp==n) {
                index = (i+1);
                break;
            }else if (temp > n){
                break;
            }
            index = (i+1);
        }

        System.out.println(index);
    }
}