// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data; // to store data
    struct Node *left;
    struct Node *right;
} *

struct Node* creatnode(int data){
    struct Node*n;//creating node pointer
    n= (struct Node *)malloc(sizeof(struct Node)); // till here i want data
    n->data;//setting a data 
    n->left = NULL;//setting a left or right childern to null
    n->right = NULL;
    return n;//reaturning a node

}
    int main()
    //construction of root node
{
    /*struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node)); // till here i want data
    p->data=2;
    p->left = NULL;
    p->right = NULL; // top most root;

    struct Node *p2;
    p1 = (struct Node *)malloc(sizeof(struct Node)); // till here i want data
    p1->data=8;
    p1->left = NULL;
    p1->right = NULL; // left node  parent

    struct Node *p2;
    p2 = (struct Node *)malloc(sizeof(struct Node)); // till here i want data
    p2->data=7;
    p2->left = NULL;
    p2->right = NULL; // right node parent

    // linking the rootnode with left and right childern;
    p->left = p1;
    p->right = p2;*/

//construction of root node using function

    struct Node *p = creatnode(2);
    struct Node *p1 = creatnode(8);
    struct Node *p2 = creatnode(7);

  // linking the rootnode with left and right childern;
    p->left = p1;
    p->right = p2;


    return 0;
}