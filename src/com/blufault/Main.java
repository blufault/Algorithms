package com.blufault;

import com.blufault.data_structures.Queue;
import com.blufault.utils.Utilities.*;

import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Queue<Integer> myQueue = new Queue<>();

        for (int i = 0; i < 10; i++) {
            myQueue.enqueue(i);
        }

        myQueue.dequeue();

        myQueue.printQueue();
    }
}
