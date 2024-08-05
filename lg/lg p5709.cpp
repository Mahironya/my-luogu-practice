#include <iostream>
using namespace std;
int main(){
    int m,t,s;
    cin>>m>>t>>s; //apple_sum = m, it costs t min to eat an apple, time passed: s min
    if (t == 0){
        cout<<0<<endl;
        return 0;
    }
    if (s%t == 0)
        cout<<max(m-s/t,0)<<endl;
        
    else         
        cout<<max(m-s/t -1,0)<<endl;
    return 0;
    
}
