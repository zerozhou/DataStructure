struct LNode {
    int data;
    struct LNode *next;
};

/*construct a null LinkList*/
void ListCreate(struct LNode *pLinkList, int count);

/*destroy link list*/
void DestroyList (struct LNode *pLinkList);

/*get element*/
int GetElem (struct LNode *pLinkList, int i);

/*locate element*/
int LocateElem(struct LNode *pLinkList, int locatedData);

/*return prior element*/
int PriorElem(struct LNode *pLinkList, int currentElem);

/*return next element*/
int NextElem(struct LNode *pLinkList, int currentElem);

/*Insert */
int ListInsert(struct LNode *pLinkList, int i, int data);

/*delete element*/
int ListDelete(struct LNode *pLinkList, int i);

/*ListTraverse*/
void ListTraverse(struct LNode *pLinkList);






