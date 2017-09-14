//
//  1808公共子序列.cpp
//  helloworld
//
//  Created by 徐悦 on 2017/9/7.
//  Copyright © 2017年 徐悦. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
/*
 //d[i][j]表示以a[i-1]的最长上升公共子序列
 //相等时，对角线上的值+1；否则取上或左的最大值
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int d[220][220]={0};
        
        for (int i=1; i<=a.length(); i++) {
            for (int j=1; j<=b.length(); j++) {
                if (a[i-1]==b[j-1]) {
                    d[i][j]=d[i-1][j-1]+1;
                }
                else
                    d[i][j]=max(d[i][j-1],d[i-1][j]);
            }
        }
        cout<<d[a.length()][b.length()]<<endl;
    }
    return 0;
}
*/
