// Fig. 6.11: Scope.java
// Scope class demonstrates field and local variable scopes.

public class Scope
{
   // field that is accessible to all methods of this class 
   private int x = 1; 

   // method begin creates and initializes local variable x 
   // and calls methods useLocalVariable and useField
   public void begin()
   {
      int x = 5; // method's local variable x shadows field x

      System.out.printf( "local x in method begin is %d\n", x ); // x = 5

 	
      System.out.printf( "\nthis.x is %d\n", this.x ); // x = 1
   } // end method begin
}