/**
 * clear_bit - Sets the value of a bit to 0 specific index
 * @n: ...
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
    {
        return (-1);
    }

    else
    {
        *n &= ~(1 << index);
        return (1);
    }
}
