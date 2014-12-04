#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <cstdio>
using namespace std;

struct node
{
  int addr;
  int val;
  int next_add;
};

int main()
{
  int first_add,n,reverse_n;
  scanf("%d %d %d",&first_add,&n,&reverse_n);
  int idx=0;
  map<int,int> map_tag;
  map_tag[-1]=-1;
  vector<node> vec_node;
  vector<node> vec_node_result;
  node input_node;
  while(idx!=n)
  {
    scanf("%d %d %d",&input_node.addr,&input_node.val,&input_node.next_add);
    map_tag[input_node.addr]=idx;
    vec_node.push_back(input_node);
    ++idx;
  }
  idx=0;
  int current_idx;
  current_idx=map_tag[first_add];
  while(idx!=n && current_idx!=-1)
  {
    vec_node_result.push_back(vec_node[current_idx]);
    current_idx=map_tag[vec_node[current_idx].next_add];
    ++idx;
  }
  current_idx=0;
  int forward_id=0;
  while(current_idx+reverse_n<=static_cast<int>(vec_node_result.size()))
  {
    current_idx+=reverse_n;
    reverse(vec_node_result.begin()+forward_id,vec_node_result.begin()+current_idx);
    forward_id=current_idx;
  }
  vector<node>::const_iterator cit=vec_node_result.cbegin();
  for (;cit!=vec_node_result.cend()-1;)
  {
    printf("%05d %d",cit->addr,cit->val);
    ++cit;
    printf(" %05d\n",cit->addr);
  }
  printf("%05d %d -1\n",cit->addr,cit->val);
  system("pause");
  return 0;
}