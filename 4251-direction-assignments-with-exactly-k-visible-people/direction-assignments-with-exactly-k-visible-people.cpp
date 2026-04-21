class Solution {
using ll=long long;
const static ll MOD=1000000007;
ll add (ll a, ll b, ll m=MOD) {return ((a%m)+(b%m)+m)%m;}
ll sub (ll a, ll b, ll m=MOD) {return ((a%m)-(b%m)+m)%m;}
ll mul (ll a, ll b, ll m=MOD) {return ((a%m)*(b%m))%m;}
ll modexp (ll a, ll e, ll m=MOD)
{
    a%=m;
    ll r=1;
    while (e)
    {
       if (e&1) r=mul(r,a,m);
       a=mul(a,a,m);
       e>>=1; 
    }
    return r;
}
ll inv(ll a, ll m=MOD) {return modexp(a,m-2,m);}
public:
    long long countVisiblePeople(long long n, long long pos, long long k)
    {
        ll ans=2;
        for (int i=1 ; i<=k ; i++)
        {
            ans=mul(ans,(n-1)-(i-1));
            ans=mul(ans,inv(i));
        }
        return ans;
    }
};