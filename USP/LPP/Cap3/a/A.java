package Codes.USP.LPP.Cap3.a;

import java.util.Scanner;

public class A {
    
   public static void main( String[] args )
   {
       Scanner input = new Scanner( System.in );
       System.out.print("Digite um número: ");
       int n = input.nextInt();
       System.out.printf( "Printando teste par de 0 até %d\n", n);
       for(int i=0; i< n; i++) {
           if (i % 2 == 0) {
               System.out.printf( "Teste %d\n", i );
           }
       }
   } // end method main
}
