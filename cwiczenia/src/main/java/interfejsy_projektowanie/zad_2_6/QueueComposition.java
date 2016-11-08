package interfejsy_projektowanie.zad_2_6;

import java.util.ArrayList;

public class QueueComposition<T> implements Q<T>{
    private ArrayList<T> list;

    public QueueComposition() {
        this.list = new ArrayList<>();
    }

    public void enqueue(T o) {
        this.list.add(o);
    }

    public T dequeue() {
        return this.list.remove(0);
    }
}
