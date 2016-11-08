package interfejsy_projektowanie.cw_1;

public class Bike extends Vehicle {

    private boolean secured;

    public Bike() {
        this.secured = false;
    }

    public void toggleSecured() {
        this.secured = !this.secured;
    }


    @Override
    void makeSound() {
        System.out.println("Eh Uh Yh");
    }
}
