#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main() {
// Loop through numbers 0 to 9
int i;
for (i = 0; i < 10; i++) {
// Print the current number
putchar(i + '0');

// Check if it's not the last number (9)
if (i < 9) {
// Print the separator ", "
putchar(',');  // ASCII value of ','
putchar(' ');  // ASCII value of ' '
}
}

// Print the end of line character '$'
putchar('$');  // ASCII value of '$'

return 0;
}
