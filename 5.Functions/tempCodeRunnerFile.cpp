int binary(int n)
{
    int d=0;
    int res=0;
    int i=0;
    while(n!=0)
    {
        d=n&1;
        res=d*pow(10,i)+res;
        n=n>>1;
        i++;
    }
    return res;
}