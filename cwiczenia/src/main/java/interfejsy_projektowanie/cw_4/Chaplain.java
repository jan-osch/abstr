package interfejsy_projektowanie.cw_4;

public class Chaplain implements Soldier, Priest {
    private String religion;
    private int age;

    public Chaplain(String religion, int age) {
        this.religion = religion;
        this.age = age;
    }

    public String getReligion() {
        return religion;
    }

    @Override
    public int getAge() {
        return this.age;
    }

    @Override
    public void sayPrayer() {
        System.out.println("Allelujah");
    }

    @Override
    public void runFromEnemy() {
        System.out.println("Please don't shoot me I am just a priest");
    }
}
