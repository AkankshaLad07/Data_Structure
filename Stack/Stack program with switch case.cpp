

#include<iostream>
#include<conio.h>
using namespace std;
#include<stdio.h>
#define Max 5
int stack[Max];
int top=-1;
void push();
void pop();
void display();
int main() 
{
  int choice;
  cout<<"--- MENU ---\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit\n";
  while(1)
  {
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
      case 1:push();
            break;
      case 2:pop();
            break;
      case 3:display();
            break;
      case 4:return 1;
    }
  }
  getch() ;
  return 0;
}
void push()
{
  int item;
  cout<<"\nEnter value for stack: ";
  cin>>item;
  if(top==Max-1)
  {
    cout<<"\nStack is overflow. ";
  }
  else
  {
    top++;
    stack[top]=item;
  }
}
void pop()
{
  int item;
  if(top==-1)
  {
    cout<<"\nStack is underflow. ";
  }
  else
  {
    item=stack[top];
    top--;
    
  }
  cout<<"\ndeleted item is "<<item;
}
void display()
{
  int i;
  for(i=top;i>=0;i--)
  {
    cout<<stack[i]<<endl;
  }
}