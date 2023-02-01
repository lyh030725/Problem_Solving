//
//  main.cpp
//  test
//
//  Created by 이용하 on 2023/01/09.
//

#include <iostream>
#include <string.h>

using namespace std;



int main() {
    
    char A[10002];
    char B[10002];
    
    
    cin >> A >> B;
    
    int max_size = 1;
    if(strlen(A) > strlen(B))
        max_size = (int)strlen(A);
    else
        max_size = (int)strlen(B);
    
    char sum[10002];
    
    for(int i = max_size-1; i >= 0; --i){
        if(!A[i]){
            sum[max_size-1 - i] = A[i];
        }
        else if(!B[i]){
            sum[max_size-1 - i] = B[i];
        }
        else{
            char num = (A[i]) + (B[i]) - '0';
            if(num > 10){
                
            }
            else{
                sum[max_size-1 - i] = num;
            }
        }
        
    }
    
    for(int i = 0; i <= max_size; ++i){
        cout << sum[i];
    }
    
    
    return 0;
}
