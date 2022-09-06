#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
ll solve(ll n,ll m)
{
    if(m==1)
    return n-1 ;
    if(n==1)
    return m-1 ;
    return (m-1)*n ;
}
int main()
{ ll n,m ;
  scanf("%lld %lld",&n,&m) ;
  cout<<solve(n,m) ;
             return 0;
}
