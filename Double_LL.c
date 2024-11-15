#include<stdio.h>
#include<stdlib.h>
struct dlist
{
    int info;
    struct dlist *next,*prev;
};
typedef struct dlist node;
main()
{
    node *s = NULL,*l = NULL,*t,*nn;
    int n;
    char ano='y';
    while (ano == 'y')
    {
        printf("Enter the number:");
        scanf("%d",&n);
        nn = (node *)malloc(sizeof(node));
        nn -> info = n;
        nn -> next = NULL;
        if(s == NULL){
            nn -> prev = NULL;
            s = nn;
        }
        else{
            l -> next = nn;
            nn -> prev = l;
        }
        l = nn;
        printf("Continue[y/n]?");
        fflush(stdin);
        scanf("%c",&ano);
    }
    printf("DLL Created.\n");
    t = s;
    while(t!=NULL){
        printf("%d\n",t->info);
        t = t->next;
    }
    printf("Backward Printing:\n");
    t = l;
    while(t != NULL){
        printf("%d\n",t->info);
        t = t->prev;
    }
}
