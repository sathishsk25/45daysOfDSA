#include <iostream>
#include "Chains.h"

int hash(int key)
{
 return key%10;
}
void Insert(struct Node *H[],int key)
{
 int index=hash(key);
 SortedInsert(&H[index],key);
}
int main()
{
 struct Node *HT[10];
 struct Node *temp;
 int i;
 
 for(i=0;i<10;i++)
 HT[i]=NULL;
 
 Insert(HT,12);
 Insert(HT,21);
 Insert(HT,42);
 
 temp=Search(HT[hash(21)],21);
 
 std::cout << temp->data;
 
 return 0;
}
