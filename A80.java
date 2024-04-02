import java.util.Scanner;

public class A80 {
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

        //stored 1 to 50's all prime numbers in hashmap
        java.util.TreeMap<Integer, Integer> treeMap = new java.util.TreeMap<>();
        int c = 1;
        for (int i = 2; i < 50; i++) {
            if (isPrime(i)) {
                treeMap.put(i, c);
                c++;
            }
        }

        //treeMap.forEach((key, value) -> System.out.println(key + ": " + value));
        
        //now will check is the next prime is correct or not
        int primeIndex = treeMap.get(primeNumber);
        int nextPrimeIndex;
        try{
             nextPrimeIndex = treeMap.get(nextPrime);
        }catch(NullPointerException e){
            return false;
        }
        
        if ((primeIndex+1)== nextPrimeIndex) {
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

}