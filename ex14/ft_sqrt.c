int ft_sqrt(int nb)
 {
    int i;
    i = 0;

    if (nb < 0)
    {
        return(0);
    }
    if (nb == 0)
    {
        return 0;
    }
    while ((i * i) <= nb)
    {
        if((i * i) == nb)
        {
            return i;
        }
        i++;
    }
    return (0);
 }
/*
 int    main()
 {
    int result;
    result = ft_sqrt(0);
    printf("%d", result);
    return (0);
 }*/