package Codes.USP.LPP.HerAndPol;

public class CarTest {
    public static void main(String[] args) {
        Car carro = new Car("prisma", "chevrolet");
        Camaro camaro = new Camaro();

        carro.speedUp();
        carro.getModel();

        System.out.println("\nCamaro acelerando com o boost desligado: ");
        camaro.speedUp();
        camaro.boost();
        System.out.println("\n\nCamaro acelerando com o boost ligado: ");
        camaro.speedUp();
        // Métodos herdados da classe Car
        // camaro.brake(); 
        camaro.getBrand();
    }
}
