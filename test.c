#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left_child,*right_child;  
}NODE;
NODE *new_node,*temp_node,*temp,*root;
void create_node()
{
    new_node = (NODE*) malloc(sizeof(NODE));
    printf("Enter data : ");
    scanf("%d",&new_node->data);
    new_node->left_child = NULL;
    new_node->right_child = NULL;
}
void insert_root()
{
    create_node();
}
void insert_left()
{
    
}
int main()
{
    int
}