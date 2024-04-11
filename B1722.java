import java.util.Scanner;

class B1722 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t != 0) {
            
            int a = input.nextInt();
            input.nextLine();

            String r1 = input.nextLine();
            String r2 = input.nextLine();
            boolean flag = false;

            for (int j = 0; j < a; j++) {
                if(r1.charAt(j) == r2.charAt(j)){
                    flag = true;
                }else if(r1.charAt(j) == 'B' && r2.charAt(j) == 'G') {
                    flag = true;
                }else if(r1.charAt(j) == 'G' && r2.charAt(j) == 'B') {
                    flag = true;
                }else{
                    flag = false;
                    break;
                }
            }


            if (flag) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

            t--;
        }
    }

}