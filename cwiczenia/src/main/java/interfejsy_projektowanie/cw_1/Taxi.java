package interfejsy_projektowanie.cw_1;

public class Taxi extends Car {

    private int numberPassengers;
    private int maxNumberPassengers;

    public Taxi(int maxPassengers) {
        this.maxNumberPassengers = maxPassengers;
        this.numberPassengers = 0;
    }

    public void addPassenger() {
        this.numberPassengers++;
    }

    public void dropPassengerOff() {
        this.numberPassengers--;
    }

    public boolean availableForRide() {
        return this.numberPassengers < this.maxNumberPassengers;
    }
}
