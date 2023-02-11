// Maximise the value of |Ai-Aj|+|i-j| where A is an array
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

std::vector<int> brute_force(){
int tec;
std::cin>>tec;
std::vector<int> sol;
while(tec--){
    int num;
    std::cin>>num;
    int arr[num];
    int unsort[num];
    for(int i=0;i<num;i++){
        std::cin>>arr[i];
        unsort[i] = arr[i];
    }
   int ans=0; 
   for(int x=0;x<num;x++){
    for(int y=0;y<num;y++){
      ans = std::max(ans, abs(arr[x]-arr[y])+abs(x-y));
    }
   } 
   sol.push_back(ans);
   
}

return sol;

}




int main(){

std::vector<int> god = brute_force();
for(auto itr = god.begin();itr != god.end();itr++){
    std::cout<<*itr<<std::endl;
}

}