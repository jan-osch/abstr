package interfejsy_projektowanie.cw_3;

public class Parrot extends Animal implements Speakable {
    @Override
    public void speak() {
        System.out.println("Squak!");
    }
}
