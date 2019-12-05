package com.blufault;

import com.blufault.data_structures.Bag;
import com.blufault.utils.Utilities.*;

import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Bag<Integer> myBag = new Bag<>();

        for (int i = 0; i < 10; i++) {
            myBag.add(i);
        }

        System.out.println("Is the bag empty? " + myBag.isEmpty());
        System.out.println("The size of the bag: " + myBag.size());
    }
}
