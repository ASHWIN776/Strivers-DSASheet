

int modularExponentiation(int x, int n, int m)
{

    if (n == 0)
    {
        return 1;
    }

    int answer = modularExponentiation(x, n / 2, m);

    if (n % 2 == 0)
    {
        return (1LL * answer * answer) % m;
    }
    else
    {
        return (1LL * (1LL * answer * answer) % m * x % m) % m;
    }
}