#include <REG52.H>
void delay_ms(unsigned int t)
{
    usigned int x, y;
    for (x = 0; x < t; x++)
    {
        for (y = 0; y < 120; y++)
        {
            // Do nothing, just wait
        }
    }
}
void main(void)
{
    while (1)
    {
        P1 ^= 0x01;
        delay_ms(1000); // Delay for 1000 ms
    }
}