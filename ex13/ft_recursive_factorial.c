int ft_recursive_factorial(int nb)
 {
    if (nb == 0 || nb == 1)
    {
        return (1);
    }
    if (nb < 0)
    {
        return(0);
    }
    return nb * ft_recursive_factorial(nb - 1);
 }
/*
int    main()
{
    int result;
    result = ft_recursive_factorial(5);
    printf("%d", result);
    return(0);
}*/