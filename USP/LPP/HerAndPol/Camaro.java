package Codes.USP.LPP.HerAndPol;

// Carro Camaro estende a classe Carro (Herança)
public class Camaro extends Car {
    private boolean boost = false;

    // Construtor do Camaro chama o do Carro simples e passa seus argumentos
    Camaro() {
        super("Camaro", "Chevrolet");
    };

    // Método para ativar o turbo do carro
    public void boost() {
        this.boost = true;
        System.out.println("Boost ligado");
    }

    // Polimorfismo
        // Aplica o método de aumentar a velocidade de modo especial no Camaro
    public void speedUp() {
        if(boost) {
            final int acceleration = 15;
            changeVelocity(acceleration);
        }
        else { // não sei se esse é o melhor jeito, mas foi o que achei
            super.speedUp();
        }
    }
}
