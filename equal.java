import java.util.*;
public class equal {
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a ");
        int a = sc.nextInt();
        System.out.println("enter b ");
        int b = sc.nextInt();

        if(a==b){
            System.out.println("Equal");
        }
        else if (a>b){
                System.out.println("a is greater");
            }
        else{
                System.out.println("b is greater");
            }
            sc.close();
        }

    }

