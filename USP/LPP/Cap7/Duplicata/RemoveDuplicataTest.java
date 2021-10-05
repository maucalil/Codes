package Codes.USP.LPP.Cap7.Duplicata;

import java.util.Arrays;

public class RemoveDuplicataTest {
    public static void main( String[] args ) {
        double[] array = RemoveDuplicata.removeDuplicates();

            System.out.printf("Array sem duplicata: %s\n\n", Arrays.toString(array));
    }
}
