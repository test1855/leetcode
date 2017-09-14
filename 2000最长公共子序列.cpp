//
//  2000最长公共子序列.cpp
//  helloworld
//
//  Created by 徐悦 on 2017/9/7.
//  Copyright © 2017年 徐悦. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int a[550],am,b[550],bm,d[550][550],max;
    cin>>am;
    for(int i=0;i<am;i++)
        cin>>a[i];
    cin>>bm;
    for(int i=0;i<bm;i++)
        cin>>b[i];
    for (int i=0;i<=am;i++)
        for (int j=0;j<=bm;j++)
            d[i][j]=0;
    
    for (int i=0; i<am; i++) {
        for (int j=0; j<bm; j++) {
            
        }
    }
    
    
    return 0;
}
