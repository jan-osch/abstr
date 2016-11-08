package interfejsy_projektowanie.cw_2;

public abstract class Animal {
    private String name;
    private int age;


    public final void setAge(int age) {
        if (age < 0 || age > 176) throw new RuntimeException("Age must be between 0 and 176");

        this.age = age;
    }

    public final void setName(String name) {
        if (name.equals("")) throw new RuntimeException("Name must not be empty");

        this.name = name;
    }

    abstract public void speak();
}
