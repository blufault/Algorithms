package com.blufault.data_structures;

/**
 * Node: This is going to be used throughout Algorithms book
 */

public class Node<T> {
    T value;
    Node next;

    Node(T value) {
        this.value = value;
        this.next = null;
    }
}
