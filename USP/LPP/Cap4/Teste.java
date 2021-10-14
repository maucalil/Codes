package Cap4;
// Fig. 2.1: Welcome1.java
// Text-printing program.

import java.util.Scanner;

public class Teste  
{
   // main method begins execution of Java application
   public static void main( String[] args )
   {
       Scanner input = new Scanner( System.in );
       System.out.print("Digite um número: ");
       double n = input.nextDouble();
    //    System.out.printf( "Printando teste par de 0 até %d\n", n);
    //    for(int i=0; i< n; i++) {
    //        if (i % 2 == 0) {
    //            System.out.printf( "Teste %d\n", i );
    //        }
    //    }
    System.out.printf( "%.2f\n", n);
    
   } // end method main
} // end class Welcome1
