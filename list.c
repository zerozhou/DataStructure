#include "list.h"

struct LNode *pListHead = NULL;

void InitList (struct LNode *pListHead)
{
    pListHead = (struct LNode *)malloc(sizeof(struct LNode));
    if(NULL == pListHead)
    {
        printf ("Initialization failed!\n");
        return;
    }
    pListHead->data = 0;
    pListHead->next = NULL;
    
    return;
}

void DestroyList(struct LNode *pListHead)
{
    pListHead->next = NULL;
    return;
}
