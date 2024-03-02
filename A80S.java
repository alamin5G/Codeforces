import java.util.Scanner;

public class A80S {
     public static void main(String[] args) {
         Scanner input = new Scanner(System.in);
         int primeNumber = input.nextInt();
         int nextPrime   = input.nextInt();
         boolean b = isNextPrime(primeNumber, nextPrime);
         if (b) {
            System.out.println("YES");
         }else{
            System.out.println("NO");
         }
    }
    public static boolean isNextPrime(int primeNumber, int nextPrime){
        //first check the nextPrime number is prime or not
        //best case TC = O(n/2)
        boolean b = isPrime(nextPrime);
        if (!b) {
            return false;
        }
        //now find the next prime number to validate the prime number;
        int nextOfPrime = -1;
        for (int i = primeNumber+1; i < 50; i++) {
            if (nextPrime(i)) {
                nextOfPrime = i;
                break;
            }
        }
        if (nextPrime == nextOfPrime) {
            return true;
        }
        return false;
    }

    
    public static boolean isPrime(int i){
        for (int j = 2; j <= i/2; j++) {
            if (i%j==0) {
                return false;
            }
        }

        return true;
    }

    public static boolean nextPrime(int i){
        for (int j = 2; j <= i/2; j++) {
            if (i%j==0) {
                return false;
            }
        }

        return true;
    }
}
