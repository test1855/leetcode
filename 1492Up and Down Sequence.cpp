//
//  1492Up and Down Sequences.cpp
//  helloworld
//
//  Created by 徐悦 on 2017/9/5.
//  Copyright © 2017年 徐悦. All rights reserved.
//

#include<iostream>
#include<iomanip>
using namespace std;
int a[50];
int n=0;
void fun()
{
    int i,j,upNum=0,upLen=0,downNum=0,downLen=0,tmpLen=0;
    for(i=1;i<n;)
    {
        if(a[i]>a[i-1])
        {
            upNum++;
            upLen+=(tmpLen+1);
            tmpLen=0;
            for(j=i+1;j<n;j++)
            {
                if(a[j]>=a[j-1])
                {
                    upLen++;
                }
                else
                    break;
            }
            i=j;
        }
        else if(a[i]<a[i-1])
        {
            downNum++;
            downLen+=(tmpLen+1);
            tmpLen=0;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<=a[j-1])
                {
                    downLen++;
                }
                else
                    break;
            }
            i=j;
        }
        else
        {
            tmpLen++;
            i++;
        }
    }

    std::cout<<"Nr values = "<<n<<":  ";
    double result=0.0;
    if(upNum!=0)
        result=((double)upLen/(double)upNum);
    std::cout<<fixed<<setprecision(6)<<result<<" ";
    result=0.0;
    if(downNum!=0)
        result=((double)downLen/(double)downNum);
    std::cout<<fixed<<setprecision(6)<<result<<endl;
}
/*
//注意⚠️设置输出精度需用cout<<fixed<<setprecision(?)<<......
//对于多组数据先读入再操作！！会方便很多的
int main(int argc, const char * argv[])
{
    int tmp;
    std::cin>>tmp;
    n=0;
    while(tmp!=0)
    {
        a[n++]=tmp;
        std::cin>>tmp;
        while(tmp!=0)
        {
            a[n++]=tmp;
            std::cin>>tmp;
        }
        fun();
        n=0;
        std::cin>>tmp;
    }
    return 0;
}
*/
