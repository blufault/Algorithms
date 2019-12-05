package com.blufault.data_structures;

import com.blufault.data_structures.Node;

// 3 methods will be addToHead, removeFromHead, addToTail, removeFromTail, traverse

public class LinkedList<T> {
    Node head;
    Node tail;

    public LinkedList() {
        this.head = null;
        this.tail = null;
    }

    /**
     * addToHead: Append a Node to the head of the linked list
     * @param item value for the node
     * @return null
     */
    public void addToHead(T item) {
        // todo: refactor (don't need to)
        if (this.head == null) {
            Node node = new Node<T>(item);
            this.head = node;
            this.tail = node;
        } else {
            Node tmp = this.head;
            this.head = new Node<T>(item);
            this.head.next = tmp;
        }
    }

    /**
     * removeFromHead: Remove a Node from the head of the linked list
     */
    public void removeFromHead() {
        if (this.head != null) {
            this.head = this.head.next;
        }
    }

    /**
     * addToTail: Append a Node to the tail of the linked list
     * @param item value for the Node
     * @return null
     */
    public void addToTail(T item) {
        if (this.tail == null) {
            return;
        } else {
            Node prevTail = this.tail;
            Node node = new Node<T>(item);

            prevTail.next = node;
            this.tail = node;
        }
    }

    /**
     * removeFromTail: Remove a Node from the tail of the linked list
     */
    public void removeFromTail() {
        if (this.tail == null) {
            return;
        } else {
            Node prevTail = traverseBefore(this.tail);
            this.tail = prevTail;
            this.tail.next = null;
        }
    }

    /**
     * traverse won't be public available to clients.
     * use is only for debugging
     */
    private void traverse() {
        Node i = null;
        for(i = this.head; i.next != null; i = i.next) {
            System.out.println("Inside the for-loop: " + i.value);
        }
        System.out.println("The last node: " + i.value);
    }

    /**
     * traverseBefore: return the Node before the target
     * @param target a Node
     * @return a Node
     */
    private Node<T> traverseBefore(Node target) {
        Node nodeBefore = null;

        for(Node i = this.head; i != target; i = i.next) {
            nodeBefore = i;
        }

        return nodeBefore;
    }
}
