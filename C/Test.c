#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "DUSK";
    int power = 100;
    
    printf("━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("  System: %s Terminal\n", name);
    printf("  Power Level: %d%%\n", power);
    printf("━━━━━━━━━━━━━━━━━━━━━━\n");
    
    for(int i = 1; i <= 3; i++) {
        printf("[%d] Code compiled.\n", i);
    }
    
    printf("\n✓ %s's C environment is ready.\n", name);
    return 0;
}