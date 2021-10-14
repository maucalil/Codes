
public class Max {
    public static double max( double... number) {
        double y = 0.0;
        for ( double x: number) 
            if (x > y ) 
                y = x;
        return y;  
    }

    public static void main( String[] args) {
        int d1 = 2;
        int d2 = 5;
        int d3 = 3;
        double d4 = 7.5;

        System.out.printf( "max() = %.2f\n", max());
        System.out.printf( "max(d1) = %f\n", max(d1));
        System.out.printf( "max( d1, d2 ) = %.2f\n", max(d1,d2));
        System.out.printf( "max() = %.2f\n", max(d1,d2,d3));
        System.out.printf( "max() = %.2f\n", max(d1,d2,d3,d4));
    }
}
