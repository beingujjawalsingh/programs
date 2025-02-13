import java.util.*;
 
 public class example{


   public static void main (String [] args){
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the radius of a circle");
    double a =sc.nextDouble();
    double  area  = Math.PI * a * a ;

    System.out.println("area of a circle" +area);

    sc.close();

   }
}