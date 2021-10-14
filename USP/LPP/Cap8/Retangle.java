package Cap8;

public class Retangle {
    
    private double length;
    private double width;

    Retangle() {
        this.length = 1;
        this.width = 1;
    }

    Retangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    double getLength() {
        return this.length;
    }

    void setLength(double length) {
        if(length >= 0.0 && length <= 20.0)
        {
            this.length = length;
        }
        else {
            System.out.println("Retangle length needs to be between 0.0 and 20.0 inclusive");
        }
    }

    double getWidth() {
        return this.width;
    }

    void setWidth(double width) {
        if(width >= 0.0 && width <= 20.0)
        {
            this.width = width;
        }
        else {
            System.out.println("Retangle width needs to be between 0.0 and 20.0 inclusive");
        }
    }

    double perimeter() {
        double perimeter = 2*(this.width + this.length);
        return perimeter;
    }

    double area() {
        double area = this.length * this.width;
        return area;
    }

    public static void printRetangle(Retangle retangle, String message) {
        System.out.printf("\n%s: \n\n", message);
        System.out.printf("    Lenght: %2f\n", retangle.getLength());
        System.out.printf("    Width: %2f\n", retangle.getWidth());
        System.out.printf("    Perimeter: %2f\n", retangle.perimeter());
        System.out.printf("    Area: %2f\n", retangle.area());
    }
}
