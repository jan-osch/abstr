package generyki.cw_3_1;

public class main {
    public static void main(String[] args) {
        TwoTuple<String, Integer> hello = new TwoTuple<>("Hello", 1);

        System.out.println(hello.getFirst());
        System.out.println(hello.getSecond());
        System.out.println("");

        FourTuple<String, Integer, Float, String> tuple = new FourTuple<>("Jan", 22, 0.12f, "Kowalkski");

        System.out.println(tuple.getFirst());
        System.out.println(tuple.getSecond());
        System.out.println(tuple.getThird());
        System.out.println(tuple.getFourth());
    }
}
