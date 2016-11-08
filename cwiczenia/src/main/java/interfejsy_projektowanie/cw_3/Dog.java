package interfejsy_projektowanie.cw_3;

public class Dog extends Animal implements Speakable {
    @Override
    public void speak() {
        System.out.println("Bark bark bark");
    }
}
