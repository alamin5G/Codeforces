import java.util.Scanner;

public class C1989 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        while (n-- > 0){
            long a = sc.nextLong();
            int bVote = 0;
            int cVote = 0;

            for(int i = 0; i < a; i++){
               long b = sc.nextLong();
                if(b == 1){
                    bVote++;
                }else if(b ==-1){
                    bVote--;
                }
            }
            for(int i = 0; i < a; i++){
               long c = sc.nextLong();
                if(c == 1){
                    cVote++;
                }else if(c ==-1){
                    cVote--;
                }
            }

            if (bVote >= 1 && cVote <= 0 || bVote <= 0 && cVote >= 1 || bVote >= 1 && cVote >= 1 ){
                System.out.println("1");
            }else if (bVote <= 0 && cVote == 0 || bVote == 0 && cVote <= 0 || bVote == 0 && cVote == 0 ){
                System.out.println("0");
            }else if(bVote <= -1 && cVote <= -1){
                System.out.println("-1");
            }

        }
    }
}
