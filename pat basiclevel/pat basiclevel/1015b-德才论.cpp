#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct decai{
  int name;
  int de_score;
  int cai_score;
};



bool comp1(const decai &vec1,const decai &vec2)
{
  if (vec1.de_score+vec1.cai_score>vec2.de_score+vec2.cai_score)
  {
    return true;
  }else if ((vec1.de_score+vec1.cai_score)==(vec2.de_score+vec2.cai_score))
  {
    if (vec1.de_score==vec2.de_score)
    {
      return vec1.name<vec2.name;
    }else
    {
      return vec1.de_score>vec2.de_score;
    }
  }
  return false;
}


int main()
{
  int member_num,l,h;
  scanf("%d %d %d",&member_num,&l,&h);
  if (l<60 || h>=100)
  {
    return 0;
  }
  decai input_data;
  vector<decai> vec1;
  vector<decai> vec2;
  vector<decai> vec3;
  vector<decai> vec4;
  for (int i=0;i!=member_num;++i)
  {
    scanf("%d %d %d",&input_data.name,&(input_data.de_score),&(input_data.cai_score));
    if (input_data.de_score<l || input_data.cai_score<l)
    {
      continue;
    }
    if (input_data.de_score>=h && input_data.cai_score>=h)
    {
      vec1.push_back(input_data);
      continue;
    }
    if (input_data.cai_score<h && input_data.de_score>=h)
    {
      vec2.push_back(input_data);
      continue;
    }
    if (input_data.de_score<h && input_data.cai_score<h && input_data.de_score>=input_data.cai_score)
    {
      vec3.push_back(input_data);
      continue;
    }
    vec4.push_back(input_data);
  }
  while (member_num)
  {
    
    --member_num;
  }
  sort(vec1.begin(),vec1.end(),comp1);
  sort(vec2.begin(),vec2.end(),comp1);
  sort(vec3.begin(),vec3.end(),comp1);
  sort(vec4.begin(),vec4.end(),comp1);

  int num_count=vec1.size()+vec2.size()+vec3.size()+vec4.size();
  printf("%d\n",num_count);
  for (vector<decai>::iterator iter=vec1.begin();iter!=vec1.end();++iter)
  {
    printf("%d %d %d\n",(*iter).name,(*iter).de_score,(*iter).cai_score);
    //cout<<(*iter).name<<" "<<(*iter).de_score<<" "<<(*iter).cai_score<<endl;
  }
  for (vector<decai>::iterator iter=vec2.begin();iter!=vec2.end();++iter)
  {
    printf("%d %d %d\n",(*iter).name,(*iter).de_score,(*iter).cai_score);
    //cout<<(*iter).name<<" "<<(*iter).de_score<<" "<<(*iter).cai_score<<endl;
  }
  for (vector<decai>::iterator iter=vec3.begin();iter!=vec3.end();++iter)
  {
    printf("%d %d %d\n",(*iter).name,(*iter).de_score,(*iter).cai_score);
    //cout<<(*iter).name<<" "<<(*iter).de_score<<" "<<(*iter).cai_score<<endl;
  }
  for (vector<decai>::iterator iter=vec4.begin();iter!=vec4.end();++iter)
  {
    printf("%d %d %d\n",(*iter).name,(*iter).de_score,(*iter).cai_score);
    //cout<<(*iter).name<<" "<<(*iter).de_score<<" "<<(*iter).cai_score<<endl;
  }
  system("pause");
  return 0;
}