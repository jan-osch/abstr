package interfejsy_projektowanie.cw_1;

public class Car extends Vehicle {
    private String registrationNumber;
    private Boolean driverInside;

    public Car() {
        this.registrationNumber = "";
        this.driverInside = false;
    }

    @Override
    void makeSound() {
        System.out.println("Bruum");
    }


    public String getRegistrationNumber() {
        return registrationNumber;
    }

    public void setRegistrationNumber(String registrationNumber) {
        this.registrationNumber = registrationNumber;
    }
}
