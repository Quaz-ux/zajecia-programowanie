long long silnia(int n)
{
    long long wynik = n;
    if (wynik == 0)
        return 1;
    int spr = n;
    int i = 1;
    for (; spr - 1 != 0; spr--)
    {
        wynik = wynik * i;
        i++;
    }
    return wynik;
}