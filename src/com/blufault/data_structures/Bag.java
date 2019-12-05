package com.blufault.data_structures;

/**
 * A bag is a collection where removing items is not supported - its purpose is to provide clients with the ability
 * to collect items and then to iterate through the collected items.
 */

public class Bag<T> {
    /**
     * add: Add an item to the bag
     * @param item this is a generic item
     * @return null
     */
    void add(T item) {}

    /**
     * isEmpty: returns a boolean if the bag is empty
     * @return boolean
     */
    boolean isEmpty() {
        return true;
    }
    int size() {
        return 0;
    }
}
