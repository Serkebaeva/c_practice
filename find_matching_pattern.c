#include "header.h"

int find_matching_pattern(const char pattern[]) {
	if (pattern == NULL) {
		fprintf(stderr, "Error: Pattern is NULL\n");
		return -1;
	}
	char line[MAX_LINE];
	char matches[1000][MAX_LINE]; // Store up to 1000 matches
	int match_found = 0;

	while (custom_getline(line, MAX_LINE) > 0) {
		if (strindex(line, pattern) >= 0) {
			strcpy(matches[match_found], line);
			match_found++;

		}
	}

	// After EOF/ CTRL+D, print all matching lines
	if (match_found > 0) {
		printf("\nMATCH:\n");
		for (int i = 0; i < match_found; i++) {
			printf("\033[4m%s\033[0m", matches[i]);
			/* 
			ANSI Escape Code for Underline
			Start underline: \033[4m
			End formatting: \033[0m
			 */
		}
	} else {
		printf("No matching lines found.\n");
	}
	return match_found;
}
/* 
int main(int argc, char *argv[])
{
    const char *pattern = "default_pattern";
    if (argc == 2) {
        pattern = argv[1];
    }
    int matches = find_matching_pattern(pattern);
    printf("Number of matching lines: %d\n", matches);
    return 0;
}
 */