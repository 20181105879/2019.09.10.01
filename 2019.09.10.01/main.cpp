//
//  main.cpp
//  2019.09.10.01
//
//  Created by s20181105879 on 2019/9/10.
//  Copyright © 2019 s20181105879. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
struct stu{
    string xuehao;
    string nmae;
    int y,s,w;
    int sum=0;
    
};
int main(int argc, const char * argv[]) {
    long long n;
    cin>>n;
    stu s[n],max;
    cin>>s[0].xuehao>>s[0].nmae>>s[0].y>>s[0].s>>s[0].w;
    max.nmae=s[0].nmae;
    max.s=s[0].s;
    max.w=s[0].w;
    max.xuehao=s[0].xuehao;
    max.y=s[0].y;
    max.sum=s[0].s+s[0].y+s[0].w;
    for(long long i=1;i<n;i++)
    {
        cin>>s[i].xuehao>>s[i].nmae>>s[i].y>>s[i].s>>s[i].w;
        s[i].sum=s[i].s+s[i].y+s[i].w;
        if(s[i].sum>=max.sum)
        {
            max.nmae=s[i].nmae;
            max.xuehao=s[i].xuehao;
            max.sum=s[i].sum;
        }
    }
    cout<<max.nmae<<" "<<max.xuehao<<" "<<max.sum<<endl;
    
    
    return 0;
}
