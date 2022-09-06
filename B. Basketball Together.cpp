#include <iostream>
#include <cmath> 
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

int main()
{ ll n,d ;
  scanf("%lld %lld",&n,&d) ;
  vector <ll> a ;
  for(ll i=0;i<n;i++)
  {
      ll x;
      scanf("%lld",&x) ;
      a.push_back(x) ;
  }
  sort(a.begin(),a.end(),greater <ll> ()) ;
  ll i = 0 ;
  ll cnt = 0 ;
  ll total = 0 ;
  while(total<n and i<n)
  {    if(a[i]>d)
   { cnt++ ;
   i++ ;
   total++ ;
       
   }
   else {
      ll team = (d/a[i]) + 1 ;
      total+=team ;
      if(total<=n)
      cnt++ ;
      i++ ;
   }
  }
  cout<<cnt ;
 
             return 0;
}
