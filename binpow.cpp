#include <bits/stdc++.h>

using namespace std;

// O(logn)
long long binpow(long long a, long long n){
    if(n==0) return 1;
    long long res = binpow(a, n/2);
    if(n%2)
        return res*res*a;
    else {
        return  res*res;
    }
}