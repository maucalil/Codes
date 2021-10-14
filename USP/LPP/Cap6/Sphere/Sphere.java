package Cap6.Sphere;

import java.util.Scanner;

public class Sphere {
    public void determineSphereVolume() {
        Scanner input = new Scanner( System.in );

        System.out.print("Enter the sphere radius: ");
        double radius = input.nextDouble();

        System.out.printf("\nThe sphere volume is: %2f\n", sphereVolume(radius));
    }
    
    private double sphereVolume(double radius) {
        double volume = ( 4.0 / 3.0) * Math.PI * Math.pow(radius, 3);
        
        return volume;
    };
}
