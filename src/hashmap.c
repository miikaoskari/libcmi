//
// Created by miika on 2/3/25.
//
#include <stdio.h>

#include "hashmap.h"

void identify_identical(int values[], int number)
{
    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < number; ++j) {
            if (i == j)
            {
                printf("found twins at %i", number);
            }
        }
    }
    printf("no twins found");
}
