package com.blufault;

import com.blufault.utils.Utilities;

import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Integer[] myArray = {1, 2, 3};

        System.out.println("Find the max: " + (Integer) Utilities.findMax(myArray));
    }
}
