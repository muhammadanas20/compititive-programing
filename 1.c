#include <stdio.h>
//flipping bits
int main()
{
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    // The ~ operator flips all bits (0 becomes 1, 1 becomes 0)
    // We cast it to 'unsigned int' to treat the sign bit as value
    unsigned int flipped[n];
    for (int i = 0; i < n; i++)
    {
        flipped[i] = (unsigned int)~input[i];
        printf("%u\n", flipped[i]);
    }
    const 

    return 0;
}
