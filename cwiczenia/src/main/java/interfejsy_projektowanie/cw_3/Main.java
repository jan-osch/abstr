package interfejsy_projektowanie.cw_3;

public class Main {

    public static void main(String[] args) {
        Speakable[] animals = {
                new Dog(),
                new Cat(),
                new Cat(),
                new Parrot(),
                new Robot(),
                new Robot()
        };
        Main.speakAll(animals);
    }


    static void speakAll(Speakable[] animals) {
        for (Speakable animal : animals) {
            animal.speak();
        }
    }
}
