#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *Next;
};
void insf(struct node **first, int no)
{
  struct node *new=NULL, *Temp=NULL;
  new=(struct node*)malloc(sizeof(struct node));
  new->data=no;
  new->Next=NULL;
  if(*first==NULL)
  {
    *first=new;
    new->Next=new;
  }
  else
  {
    Temp=first;
    while(Temp->Next!=first)
    {
      Temp=Temp->Next;
    }
    new->Next=*first;
    Temp->Next=new;
    *first=new;
  }
  printf("%d element inserted",new->data);
  return;
}
void d(struct node *first)
{
  struct node *temp=first;
  if(first==NULL)
  {
    printf("\nlist empty ");
  }
  else
  {
    while(temp->Next!=first)
    {
      printf(" |%d| -> ",temp-data);
      temp=temp->next;
    }
    printf(" |%d| ",temp-data);
  }
}
int main() 
{
  struct node *head=NULL;
  insf(&head, 30);
  insf(&head, 67);
  d(head);
  getch() ;
  return 0;
}