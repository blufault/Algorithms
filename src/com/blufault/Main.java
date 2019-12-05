package com.blufault;

import com.blufault.data_structures.LinkedList;
import com.blufault.utils.Utilities.*;

import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        LinkedList<Integer> ll = new LinkedList<Integer>();

        for (int i = 0; i < 10; i++) {
            ll.addToHead(i);
        }

        ll.removeFromTail();
    }
}
