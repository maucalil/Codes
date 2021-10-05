package Codes.USP.LPP.HerAndPol;

public class Car {
    private String model;
    private String brand;
    private double maxVel = 180;
    private double currentVel = 0.0;
    
    // construtor da classe Carro
    // recebe o modelo e marca do carro como parâmetro do construtor
    Car(String model, String brand) { 
        this.model = model;
        this.brand = brand;
    };

    // Método privado para alterar a velocidade do carro
    // Protected pois não quero que o usuário saiba a lógica de mudar a velocidade
    // Quero que ele apenas pise no acelerador ou no freio
    // Mas quero que classes que extendam a classe Car possam utilizar esse mecanismo (ver Camaro Class)
    // Conceito de encapsulamento - devo deixar visível ao usuário apenas os meios de fazer, não como é feito
    protected void changeVelocity(int velocity) {
        double newVel = this.currentVel + velocity;
        if (newVel >= 0.0 && newVel <= this.maxVel) {
            this.currentVel = newVel;
        }
        else {
            this.currentVel = velocity > 0 ? this.maxVel : 0.0;
        }
        System.out.printf("Velocidade alterada em %d km/h\n", velocity);
    }

    // Método para aumentar a velocidade do Carro
    // Se assemelha a pisar no acelerador 
    public void speedUp() {
        final int acceleration = 5;
        changeVelocity(acceleration);
    }

    // Método para frear o Carro
    // Se assemelha a pisar no freio 
    public void brake() {
        final int braking = -5;
        changeVelocity(braking);
    }

    // Método para exibir o modelo do carro
    public String getModel() {
        return this.model;
    }
    
    // Método para exibir a marca do carro
    public String getBrand() {
        return this.brand;
    }

    // Tava tentando fazer uma bagaça aqui e não consegui KKKKKKKKKKKKKKK

    // public void increaseMaxVelocity(double newMaxVel) {
    //     this.maxVel = newMaxVel;
    //     if( true ) { // preciso implementar
    //         System.out.printf("Velocidade máxima aumentada para %2f", newMaxVel);
    //     }
    //     else {
    //         System.out.println("You're not authorized.");
    //     }
    // }
}
