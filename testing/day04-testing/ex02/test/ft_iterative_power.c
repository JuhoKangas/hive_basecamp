int        ft_iterative_power(int nb, int power)
{
    int result;
    int count;

    result = 1;
    count = 0;
    if (power <= 0 || nb <= 0)
    {
        return (0);
    }
    while (count != power)
    {
        result = result * nb;
        count = count + 1;
    }
    return (result);
}