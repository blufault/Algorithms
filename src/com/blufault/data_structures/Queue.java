package com.blufault.data_structures;

/**
 * Queue: FIFO (First in, First out)
 *
 * Queue(): Create an empty queue
 * void enqueue(T item): add an item
 * T dequeue(): remove the least recently added item
 * boolean isEmpty: is the queue empty?
 * int size(): number of items in the queue
 */

public class Queue<T> {
    LinkedList<T> mylinkedlist;
    int capacity;

    /**
     * Queue: Create an empty queue
     */
    public Queue() {
        this.mylinkedlist = new LinkedList<T>();
        this.capacity = 0;
    }

    /**
     * Enqueue: add an item
     */
    public void enqueue(T item) {
        mylinkedlist.addToTail(item);
        this.capacity++;
    }

    public Node dequeue() {
        this.capacity--;
        return mylinkedlist.removeFromHead();
    }

    public void printQueue() {
        mylinkedlist.traverse();
    }

    public boolean isEmpty() {
        return this.capacity == 0;
    }

    public int size() {
        return this.capacity;
    }
}
