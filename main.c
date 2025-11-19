#include "header.h"

int main(int argc, char *argv[])
{
    const char *pattern = "ould"; // Default pattern
    if (argc == 2) {
        pattern = argv[1];
    }

    int matches = find_matching_pattern(pattern);

    printf("Number of matching lines: %i\n", matches);
    return 0;
}
