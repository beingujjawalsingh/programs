//import java.util.*;
public class pattern {
    public static void main(String[] args){
       // Scanner sc=new Scanner(System.in);

        // for (int i=1;i<=4;i++){
        //     for (int j=1;j<5;j++){
        //         System.out.print("*");
        //     }
        //     System.out.println("*");
        //     }
        //int n=4;
        // int m=5;
        // for(int i=1;i<=4;i++){
        //     for(int j=1;j<=5;j++){
        //         if(i==1 || i==n || j==1|| j==m){
        //             System.out.print("*");
        //          } else{
        //                 System.out.print(" ");
        //             }
        //         }
        //         System.out.println();
        //     }
        //     for(int i=0;i<=4;i++){
        //         for(int j=1;j<=i;j++){
        //             System.out.print("*");
        //         }
        //         System.out.println("*");
        //    }
        //    for(int i=4;i>=1;i--){
        //     for(int j=1;j<=i;j++){
        //         System.out.print("*"); 
        //     }
        //     System.out.println("*");
        //    }
        int n=5;
        for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int sum=i+j;
            if(sum % 2==0){
                System.out.print("1 ");  
            }
            System.out.print("0 ");
        }
        System.out.println(" ");
        }   
       }
    }
 