import java.util.*;
public class primen {
    public static void myPrime(int n){
        if (n <= 1){
            return false;
        }
        {
            for(i=2;i<=n;i++){
                if(n % i==0){
                    return false;
                }
                return true;
            }
        }
    }
    public static void main(String[] args) {
        
    }
}
