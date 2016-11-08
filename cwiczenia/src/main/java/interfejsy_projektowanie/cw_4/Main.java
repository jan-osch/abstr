package interfejsy_projektowanie.cw_4;

public class Main {
    public static void main(String[] args) {
        Chaplain bob = new Chaplain("Islam", 24);

        bob.runFromEnemy();
        Human[] players = {
                bob,
                new Human() {
                    @Override
                    public int getAge() {
                        return 11;
                    }
                },
                new Human() {
                    @Override
                    public int getAge() {
                        return 100;
                    }
                }
        };
    }
}
