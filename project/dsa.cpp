#include <iostream>

using namespace std;

int main()
{
    int arr[10],key;
    cout<<"Enter an array of integers"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i] ;
    }
    int i;
  cout<<"ENTER THE KEY TO BE FOUND "<<endl;
  cin>>key;
  
   for( i=0;i<50;i++)
    {
        if(arr[i]==key)
        {
            cout<<"key found at index "<<i<<endl;
            break;
        }
        
    }
  if(i==10)
  {
      cout<<"key not found "<<endl;
  }
  
  
    return 0;
}