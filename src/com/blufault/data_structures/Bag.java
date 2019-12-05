package com.blufault.data_structures;

import com.blufault.data_structures.*;

/**
 * A bag is a collection where removing items is not supported - its purpose is to provide clients with the ability
 * to collect items and then to iterate through the collected items.
 */

public class Bag<T> {
    LinkedList<T> linkedList;
    int capacity;

    public Bag() {
        this.linkedList = new LinkedList<T>();
        this.capacity = 0;
    }

    /**
     * add: Add an item to the bag
     * @param item this is a generic item
     * @return null
     */
    public void add(T item) {
        this.linkedList.addToHead(item);
        this.capacity++;
    }

    /**
     * isEmpty: returns a boolean if the bag is empty
     * @return boolean
     */
    public boolean isEmpty() {
        return this.capacity == 0;
    }

    public int size() {
        return this.capacity;
    }
}
