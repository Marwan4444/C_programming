/* liked list  */
#include <stdlib.h>
#include <stdio.h>
typedef struct  ll
{
    int val;
    struct ll *next;
} l;

void add(l ** head,int x);
void print(l*head);

int main()
{
    l* head =NULL;

    printf("enter the size of liked list :");
    int n;
    scanf("%d",&n);

    printf("enter the elements :\n");
    int x=0;
    for (int i=0; i<n; i++)
    {

        scanf("%d",&x);
        add(&head,x);

    }

    print(head);

    return 0;
}

void add(l**head,int x)
{
    l* tmp=(l*)malloc(sizeof(l));
    tmp ->val=x;
    tmp ->next =NULL;

    if (*head==NULL)
    {
        *head =tmp;
        return;
    }

    l*currnode=*head;

    while (currnode->next!=NULL)
    {
        currnode=currnode->next;
    }

    currnode ->next=tmp;

}

void print(l*head)
{
    l*cur =head;
    while(cur!=NULL)
    {
        printf("%d \t",cur->val);
        cur=cur->next;
    }

}
