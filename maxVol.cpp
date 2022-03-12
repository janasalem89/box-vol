
#include <iostream>
#include <string>
using namespace std;

void ComputeVolume(int length, int width,int height, int& volume ){
    
        volume= (length-2*height)*(width-2*height)*height;
        
}

int main()
{
   int length;
   int width;
   
   cout<<"enter length:";
   cin>>length;
   cout<<"enter width:";
   cin>>width;
   
   int volume=0;
   

    return 0;
}













