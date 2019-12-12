package com.blufault.utils;

/**
 * Utilities will have
 * different methods like find maximum, compute the average, copy into another array
 * reverse the elements in the array, and matrix-matrix multiplication
 */

public class Utilities {
    public static <T extends Comparable<T>> T findMax(T[] list) {
        T max = list[0];

        for (int i = 1; i < list.length; i++) {
            if (max.compareTo(list[i]) < 0) {
                max = list[i];
            }
        }

        return max;
    }
}

