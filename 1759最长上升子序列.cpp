//
//  1759最长上升子序列.cpp
//  helloworld
//
//  Created by 徐悦 on 2017/9/7.
//  Copyright © 2017年 徐悦. All rights reserved.
//

#include <iostream>
using namespace std;
/*
int main()
{
    int n,len=1,a[1100],d[1100];
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        d[i]=1;
    }
    for (int i=1; i<n; i++) {
        for (int j=0; j<i; j++) {
            if(a[i]>a[j]&&d[j]+1>d[i]){
                d[i]=d[j]+1;
                if (d[i]>len) {
                    len=d[i];
                }
            }
        }
    }
    cout<<len<<endl;
    return 0;
}
*/
