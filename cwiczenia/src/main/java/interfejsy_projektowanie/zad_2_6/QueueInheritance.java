package interfejsy_projektowanie.zad_2_6;

import java.util.ArrayList;

public class QueueInheritance<T> extends ArrayList<T> implements Q<T>{
    public void enqueue(T o) {
        this.add(o);
    }

    public T dequeue() {
        return this.remove(0);
    }
}
