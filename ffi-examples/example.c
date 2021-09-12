#include "caqe.h"
#include <stdio.h>

int main (void) {
    const char* input = 
        "c satisfiable.qdimacs\n"
        "p cnf 3 4\n"
        "e 1 0\n"
        "a 2 0\n"
        "e 3 0\n"
        "-1 2 -3 0\n"
        "2 3 0\n"
        "-2 3 0\n"
        "1 3 0\n";
        
    printf("C input: %s\n", input);

    int result = caqe_solve(input);

    printf("C result: %d\n", result);
}