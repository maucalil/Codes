package Cap8;

public class RetangleTest {
    public static void main(String[] args) {
        Retangle retangle1 = new Retangle();
        Retangle retangle2 = new Retangle();
        Retangle retangle3 = new Retangle(3, 4); 

        String message = "Retangle with default constructor(no parameters) and default values:";
        Retangle.printRetangle(retangle1, message);

        message = "Retangle with default constructor(no parameters) and values setted";
        retangle2.setLength(2);
        retangle2.setWidth(2);
        Retangle.printRetangle(retangle2, message);

        message = "Retange with constructor with parameters and values setted by parameters: ";
        Retangle.printRetangle(retangle3, message);
    }
}
