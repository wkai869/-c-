int flower(int n)
{
   int x,y,z;
        x = n / 100;
        y = (n-x*100) / 10;
        z = n % 10;
        if(n == x*x*x + y*y*y + z*z*z)
        return 0;
        return 1;
}
