/*Search a value in a stored array
using linear search*/

#include <iostream>
#include <conio.h>
using namespace std;
int linear(int[],int, int);

int main() 
{
  int pos=-1, a[20]={}, n=0 , k=0 , i=0;
  
  cout<<"\nEnter how many elements you want : ";
  cin>>n;
  cout<<"\nEnter elements for array :";

  for(i=0 ; i<n ; i++)
  {
     cin>>a[i];
  }
  cout<<"\nEnter element for search : ";
  cin>>k;
  pos=linear(a, n, k);
  
  if(pos != -1)
  {
    cout<<"\nSearch successful.Element found at position "<<pos;
  }
  else
  {
    cout<<"\nSearch unsuccessful.Element is not found!!!";
  }
  getch() ;
  return 0;
}
int linear(int arr[],int size, int srch)
{
  int i=0;
  for(i=0 ; i<size ; i++)
  {
    if(srch==arr[i])
    {
      return i;
    }
  } 
      return -1;
}