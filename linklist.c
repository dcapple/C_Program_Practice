#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *build_link(int *,int );
void show_list(NODE *);
NODE *search(NODE *,int);
void insert_node(NODE *,int);
NODE *delete_node(NODE *,NODE *);
NODE *reverse_list(NODE *);

int main(void){
    int arr[3]={2,4,1};
    NODE *head;
    head=build_link(arr,3);
    show_list(head);
    head=reverse_list(head);
    show_list(head);
    return 0;
}
//鏈結串列的建構
NODE *build_link(int *arr,int len){
    NODE *head,*current,*pre;

    for(int i=0;i<len;i++){
        current=(NODE *)malloc(sizeof(NODE));
        current->data=arr[i];

        if(i==0)
            head=current;
        else
            pre->next=current;
        
        current->next=NULL;
        pre=current;
     }
    return head;
}

//列印出串列
void show_list(NODE *head){

    while(head){
        printf("%d ",head->data);
        head=head->next;
    }
}

//對串列搜尋特定數字
NODE *search(NODE *head,int item){

    while(head->next){
        if(head->data==item)
            return head;
        else
            head=head->next;
    }
    printf("not found!! \n");
}

//將值插入串列中
void insert_node(NODE *node,int item){

    NODE *insert_item;
    insert_item=(NODE *)malloc(sizeof(NODE));
    insert_item->data=item;
    insert_item->next=node->next;
    node->next=insert_item;
}

//刪除特定的串列
NODE *delete_node(NODE *head,NODE *node){

    NODE *ptr=head;
    if(!head)
        printf("empty! \n");

    if(head==node)
        head=head->next;
    else{
        while(ptr->next!=node)
            ptr=ptr->next;
        ptr->next=node->next;
    }
    free(node);
    return head;
}

//串列的反轉
NODE *reverse_list(NODE *head){

    NODE *temp,*p;
    temp=NULL;
    while(head!=NULL){
        p=head;
        head=head->next;
        p->next=temp;
        temp=p;
    }
    return p;
}
