import java.util.*;
public class cal {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a first number:");
        int a=sc.nextInt();
        System.out.println("enter a second number:");
        int b=sc.nextInt();
        int operator = sc.nextInt();

        switch(operator){
            case 1:  System.out.println("addition:"+a+b);
            break;
            case 2:  System.out.println("subtraction:"+(a-b));
            break;
            case 3:  System.out.println("mul:"+a*b);
            break;
            case 4:  System.out.println("div:"+a/b);
            break;
            case 5:  System.out.println("rem:"+a%b);
            break;
            case 6:  System.out.println("defalut:");

        }
        sc.close();
    }
    
}
