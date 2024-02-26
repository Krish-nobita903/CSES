/*********/
/*
/*  Krish Srivastava
/*  30-08-2023
/*
/*********/
 
/********/
/* Step-1 : Look at constraints
/* Step-2 : Blindly apply binary search on answer
/* Step-3 : If this does not work , then look for another approach
/********/
 
/*******************/
/*  Always use sqrtl function not sqrt
/*  Use Map not unordered map
/******************/
 
 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
 
void solve()
{
  int n;
  cin>>n;
  int res = n*(n+1)/2;
  for(int i=0;i<n-1;i++)
  {
    int x;
    cin>>x;
    res -= x;
  }
  cout<<res<<"\n";
}
 
signed main()
{
  int tt = 1;
  //cin >> tt;
  while (tt--)
  {
    solve();
  }
  return 0;
}
