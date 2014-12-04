#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <set>
using namespace std;

/************************************************************************/
/*pay attention to long/int                                             */
/************************************************************************/
int main()
{
  long n,p;
  scanf("%d %d",&n,&p);
  long idx=n;
  vector<long> set_input;
  long temp_data;
  while(idx--)
  {
    scanf("%d",&temp_data);
    set_input.push_back(temp_data);
  }
  sort(set_input.begin(),set_input.end());
  long dist;
  long max_dist=0;
  vector<long>::iterator it;
  for (vector<long>::iterator cit=set_input.begin();cit!=set_input.end();++cit)
  {
    it=upper_bound(cit,set_input.end(),(*cit)*p);
    dist=(it-cit);
    if (dist>max_dist)
    {
      max_dist=dist;
    }
  }
  printf("%ld\n",max_dist);
  system("pause");
  return 0;
}