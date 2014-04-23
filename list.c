struct LNode *pLinkList = NULL;

void ListCreate (struct LNode *pLinkList, int )
{
    pLinkList = (struct LNode *)malloc(sizeof(struct LNode));
    if(pLinkList == NULL)
    {
        printf ("Initialization failed!\n");
        return;
    }
    pLinkList->data = 0;
    pLinkList->next = NULL;
    
    return;
}


