package Cap7.Duplicata;


import java.util.Arrays;

public class RemoveDuplicata {

    public static double[] removeDuplicates() {
        double[] array = getRandomArray();
        boolean[] isSame = new boolean[array.length];
        int sameNums = 0;

        for (int i = 0; i < array.length; i++) {
            for (int j = i+1; j < array.length; j++) {
                if(array[j] == array[i]) {
                    isSame[j] = true;
                    sameNums++;
                }
            }
        }

        double[] result = new double[array.length - sameNums];
        int count = 0;

        for(int i = 0; i < array.length; i++) {
            if( !isSame[i] ) {
                result[count] = array[i];
                count++;
            }
        }

        return result;
    }

    private static double[] getRandomArray() {
        double[] array = new double[ 5 ];
        for(int i=0; i< 5; i++){
            array[i] =  10 + (Math.random() * 100);
        }

        System.out.printf("\nArray original: %s\n\n", Arrays.toString(array));

        return array;
    }

}
