void  ft_swap(int *a, int *b)
{
   int c;
   c = *a;
   *a = *b;
   *b = c;
}
/*
int   main()
{
   int a;
   int b;

   a = 10;
   b = 20;

   printf("valor de a: %d y de b: %d\n", a, b);
   ft_swap(&a, &b);
   printf("despues a: %d y b: %d", a, b);
   return(0);
}*/