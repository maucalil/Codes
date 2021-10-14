
public class ArrayTest {
    public static void main(String[] args) {
        int[] v1 = { 10, 20, 30, 40, 50 };
        A[] v2 = {new A(), new A(), new A(), new A(), new A()};

        print(v1);
        m(v1);
        print(v1);
        for(int i = 0; i < v1.length; i++) {
            m(v1[i]);
        }
        print(v1);

        System.out.println();

        print(v2);
        m(v2);
        print(v2);
        for(int i = 0; i < v2.length; i++) {
            m(v2[i]);
        }
        print(v2);

    }

    public static void m( int x[] ) {
        for( int i = 0; i < x.length; i++) {
            x[i] *= 2;
        }
    }

    public static void m( int x ) {
            x *= 10;
    }

    public static void m( A x[] ) {
        for( int i = 0; i < x.length; i++) {
            x[i].x *= 2;
        }
    }

    public static void m( A x) {
        x.x *= 2;
    }

    public static void print( int[] v) {
        for( int value : v) {
            System.out.printf( "%6d", value);
        }
        System.out.println();
    }

    public static void print( A[] v) {
        for( A value : v) {
            System.out.printf( "%6d", value.x);
        }
        System.out.println();
    }
    
    
}
