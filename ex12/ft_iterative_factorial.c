int    ft_iterative_factorial(int nb)
{   
    int it;
    int result;
    it = 1;
    result = 1;
    if(nb == 0 || nb == 1)
    {
        return(1);
    }
    if(nb < 0)
    {
        return (0);
    }
    while(it <= nb)
    {
        result = result * it;
        it++;
    }
    return (result);
}
/*
int main()
{
    int result;
    result = ft_iterative_factorial(5);
    printf("%d", result);
    return(0);
}*/