
#include <iostream>
#include <string>
using namespace std;

void ComputeVolume(int length, int width,int height, int& volume ){
    
        volume= (length-2*height)*(width-2*height)*height;
        
}


string printResult(int length, int width, int side, int volume){
    
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
   
   int side;
   int temp;
    for(int i=1;i<length && i<width;i++)
    {
    temp=volume;
    ComputeVolume(length,width,i,volume);
    cout<<volume<<endl;
    if(volume>temp)
    {

        side=i;
    }
    
    }
    ComputeVolume(length,width,side,volume);

    return 0;
}













