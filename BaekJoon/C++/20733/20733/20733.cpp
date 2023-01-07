#include <iostream>

using namespace std;

class floor{
public:
    int floor;
    int room;
    int people;
};


int main(){
    

    int T;
    cin >> T;
    
    floor* floor_list = new floor[T];
    
    int max_floor = 1;
    
    for(int i = 0; i< T; ++i){
        cin >> floor_list[i].floor >> floor_list[i].room;
        if(max_floor < floor_list[i].floor){
            max_floor = floor_list[i].floor;
        }
    }
    
    
    for(int i = 0; i < max_floor; ++i){
        if(floor_list[i].floor == 1){
            for(int j = 0; j < floor_list[i].room; ++j){
                floor_list[i].people += j+1;
            }
        }
        else{
            
        }
    }
    
    
    
    
    
    
    return 0;
    
}
