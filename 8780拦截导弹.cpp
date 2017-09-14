//
//  8780拦截导弹.cpp
//  helloworld
//
//  Created by 徐悦 on 2017/9/7.
//  Copyright © 2017年 徐悦. All rights reserved.
//

#include <iostream>
using namespace std;
/*
 //典型的LIS类型题目：求最长递增（递减）序列；
 //以数组d[i]保存以a[i]为结束点的序列长度，初始化每个d[i]=1(因为每个a[i]都可以独立成为一个结束点)
 //第一个循环为结束点
 //嵌套着第二个循环遍历从0-i的序列，对d[i]操作
 //逆推法
 //1初始化d[i]=1
 //2for(遍历结束点)
 //     for(0-i)
 //         d[i]=max(d[j]+1,d[i])
 
int main()
{
    int n,h[120],d[120],max=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        d[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(h[j]>=h[i]&&d[j]+1>d[i])
                d[i]=d[j]+1;
        }
    }
    for(int i=0;i<n;i++)
        if(d[i]>max)
            max=d[i];
    cout<<max<<endl;
    return 0;
}
*/
