#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

bool prim(const long &num)
{
  long sqt=static_cast<long>(sqrt(static_cast<double>(num)));
  for (long i=2;i<=sqt+1;++i)
  {
    if (num==2)
    {
      return true;
    }
    if (num%i==0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  bool prime[100010];
  for (long i=0;i!=100010;++i)
  {
    prime[i]=true;
  }
  long max_n=100005;
  vector<long> vec_prim;
  long cnt=0,sum=0;
  long n;
  scanf("%d",&n);
  for (long i=2;i<=n;++i)
  {
    if (prime[i])
    {
      if (prim(i))
      {

        vec_prim.push_back(i);
        if (cnt>0 && i<=n)
        {
          if (vec_prim[cnt]-vec_prim[cnt-1]==2)
          {
            ++sum;
          }
        }
        ++cnt;
        for(long j=i*i;j<=n;j+=i)
        {
          prime[j]=false;
        }
      }
    } 
  }

  printf("%ld\n",sum);
  system("pause");
  return 0;
}