//
//  4977怪盗基德的滑翔翼.cpp
//  helloworld
//
//  Created by 徐悦 on 2017/9/7.
//  Copyright © 2017年 徐悦. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int h[120],dl[120],dr[120];

void maxBuidNum(int n)
{
    int mh=0,mr=1,ml=1;
    //right递减
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(h[i]>=h[j]&&dr[j]+1>dr[i])
            {
                dr[i]=dr[j]+1;
                if(dr[i]>mr)
                    mr=dr[i];
            }
        }
    }
    
    //left递增
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(h[i]<=h[j]&&dl[j]+1>dl[i])
            {
                dl[i]=dl[j]+1;
                if(dl[i]>ml)
                    ml=dl[i];
            }
        }
    }
    cout<<max(ml, mr)<<endl;
    
}
/*
 //两遍LIS  从左至右(1-n) 分别找出递增序列 和 递减序列
 //还有不要忘记algorithm头文件！！
int main()
{
    int k,n;
    cin>>k;
    
    for(;k>0;k--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            dl[i]=1;
            dr[i]=1;
        }
        maxBuidNum(n);
    }
    return 0;
}
*/
