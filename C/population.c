#include <stdio.h>

int main(void) {
    // declare input variables
    int start_size, end_size;

    // ask for starting population size, ensure it is at least 9
    do {
        printf("Starting population size (must be at least 9): ");
        scanf("%d", &start_size);
    } while (start_size < 9);

    // ask for ending population size, ensure it is greater than or equal to starting size
    do {
        printf("Ending population size (must be at least %d): ", start_size);
        scanf("%d", &end_size);
    } while (end_size < start_size);

    // check if starting and ending sizes are equal
    if (start_size == end_size) {
        printf("Years: 0\n");
        return 0;
    }

    // initialize year counter
    int years = 0;

    // simulate population growth each year until ending size is reached
    while (start_size < end_size) {
        int born = start_size / 3;
        int died = start_size / 4;
        start_size += born - died;
        years++;
    }

    // print number of years required for population to reach ending size
    printf("Years: %d\n", years);

    return 0;
}
