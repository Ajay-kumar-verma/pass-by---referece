#include <iostream>

using namespace std;



float function(float x,float y){
  // this function will return greather value
    if(x>y)
        return x;

     return y;
    
}

int main()
{
    int n=10;
    // i declareed array and assign their value 
    float x[]={50.6,93.8,44.9,18.7,87.8,2.7,36.2,89.6,24.3,48.1};
    float y=x[0]; // initailly y is x[0]
    
    for(int i=1;i<n;i++){
     y= function(x[i],y);    
        
    }
    
    cout<<y;
    return 0;
}
