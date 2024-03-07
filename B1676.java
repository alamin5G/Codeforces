import java.util.Scanner;

/**
 * A1676
 */
public class B1676 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        while (t!=0) {
            
            int nBox = input.nextInt();
            int[] box = new int[nBox];
            for (int i = 0; i < nBox; i++) {
                box[i] = input.nextInt();
            }

            int temp = box[0];
            for (int i = 1; i < box.length; i++) {
                if (box[i] < temp) {
                    temp = box[i];
                }
            }

            int sub=0;
            for (int i = 0; i < nBox; i++) {
                sub += box[i]-temp;
            }

            System.out.println(sub);

            t--;
        }
    }
}