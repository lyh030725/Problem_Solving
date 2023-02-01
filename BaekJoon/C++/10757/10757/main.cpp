//
//  main.cpp
//  10757
//
//  Created by 이용하 on 2023/01/09.
//

#include <iostream>
#include <string.h>


using namespace std;

int main(int argc, const char * argv[]) {
    
    char A[10001];
    char B[10001];
    
    cin >> A >> B;
    
    int len_a = (int)strlen(A);
    int len_b = (int)strlen(B);
    int diff = abs(len_a - len_b);
    
    int max_len = (len_a > len_b)? len_a: len_b;
    char sum[10001];
    
    if(len_a > len_b){
        for(int i = 0; i < diff; ++i){
            char num = A[max_len-i] + B[max_len-i-diff] - '0';
            if(num > '9'){
                sum[max_len-i] += A[max_len-i] + B[max_len-i-diff] - '9' - 1;
                sum[max_len-i-1] += '1';
            }
            else{
                sum[max_len-i] += num;
            }
            
            sum[max_len-i] += A[max_len-i] - '0';
        }
    }
    else if(len_a < len_b){
        for(int i = 0; i < diff; ++i){
            char num = A[max_len-i-diff] + B[max_len-i] - '0';
            if(num > '9'){
                sum[max_len-i] += A[max_len-i-diff] + B[max_len-i] - '9' - 1;
                sum[max_len-i-1] += '1';
            }
            else{
                sum[max_len-i] += num;
            }
        }
        sum[max_len-i] += B[max_len-i] - '0';
    }
    else{
        
    }
    
    for(int i = 1; i <= max_len; ++i){
        
            sum[max_len-i] += A[max_len-i] + B[max_len-i] - '0';
        
    }
                
    for(int i = 0; i <= max_len; ++i){
        cout << sum[i];
    }

    
    
    return 0;
}
