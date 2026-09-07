int ft_digit_counter(int n)
{
    int digits;

    digits = 0;
    if (n == 0)
        return (1);
    while (n != 0)
    {
        digits++;
        n /= 10;
    }
    return (digits);
}