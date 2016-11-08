package interfejsy_projektowanie.zad_2_6;

public class test {
    public static void main(String[] args) {
        QueueComposition<Integer> q = new QueueComposition<>();

        q.enqueue(123);
        q.enqueue(300);

        System.out.println(q.dequeue());
        System.out.println(q.dequeue());

        QueueInheritance<String> qs = new QueueInheritance<>();


        qs.enqueue("Hello World!");
        qs.enqueue("All your base are belong to us");

        dequeueArrayList(qs);
    }

    public static void dequeueArrayList(QueueInheritance q) {
        while (!q.isEmpty()) {
            System.out.println(q.dequeue());
        }
    }
}
