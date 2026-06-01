#include <iostream>
using namespace std;

int binTodecimal(int binum){
    int ans=0, pow=1;
    while (binum>0)
    {
       int rem= binum%10;
        ans+=rem*pow;
        binum/=10;
        pow*=2;
        
    }
    return ans;// decimal form of a number
    
}

int decTobinary(int dec){
    int ans=0, pow=1;
    while(dec>0){
        int rem= dec%2;
        dec/=2;

        ans+= rem*pow;
        pow*=10;
    }
    return ans;
}

int main(){
    cout<<decTobinary(5)<<"\n";
    return 0;
}
