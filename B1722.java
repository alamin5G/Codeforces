import java.util.Scanner;
import java.util.Stack;

class B1722{

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t!=0) {
            int a = input.nextInt();
            Stack<Character> firstRow = new Stack<>();
            Stack<Character> secondRow = new Stack<>();
            for (int i = 0; i < 1; i++) {
                String s = input.nextLine();
                for (int j = 0; j < a; j++) {
                    if (i==0) {
                        
                    }else{
                        secondRow.push(c);
                    }
                }
            }
            
            boolean flag = false;

            for (int i = 0; i < a; i++) {
                if ((firstRow.pop() == 'B' && secondRow.pop() == 'G') || (firstRow.pop() == 'G' && secondRow.pop() == 'B' )) {
                    flag = true;
                }else if(firstRow.pop() != secondRow.pop()){
                    flag = false;
                    break;
                }else{
                    flag = true;
                }
            }

            if (flag) {
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }

            t--;
        }
    }
    

}