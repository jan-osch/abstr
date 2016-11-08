package interfejsy_projektowanie.cw_2;

public class main {

    public static void main(String[] args) {
        Animal[] animals = {new Dog(), new Cat(), new Parrot()};
        main.speakAll(animals);
        main.ageAll(animals, 11);
        main.nameAll(animals, "");
    }


    static void speakAll(Animal[] animals) {
        for (Animal animal : animals) {
            animal.speak();
        }
    }

    static void ageAll(Animal[] animals, int age) {
        for (Animal animal : animals) {
            animal.setAge(age);
        }
    }

    static void nameAll(Animal[] animals, String name) {
        for (Animal animal : animals) {
            animal.setName(name);
        }
    }
}
