import java.util.Scanner;

public class A1829{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        input.nextLine();
        while(t > 0){
            String s = input.nextLine();

            char[] codeforces = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};

            int count = 0;
            for (int i = 0; i < codeforces.length; i++) {
                if(s.charAt(i) != codeforces[i]){
                    count++;
                }
            }
            System.out.println(count);
            t--;
        }
    }    
}