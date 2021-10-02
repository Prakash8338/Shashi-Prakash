#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct node* root = NULL;
struct node
{
  int data;
  struct node* left;
  struct node* right;
} *previous, *current,*new,*root,*iterator,*nd,*top,*tail,*temp;

typedef struct node node;

node* top = NULL;


node *create_stack(int data)
{
  node *newnode = (node *)malloc(sizeof(node));
  newnode->data = data;
  newnode->left = top;
  newnode->right = NULL;
  return newnode;
}
void push(int data)
{ 
 
tail = create_stack(data);
top = tail;  
}
node* pop(){
  node* temp = top;
  top = top->left;
  return temp; 
}    

node *create_node(int data)
{
  node *temp = (node *)malloc(sizeof(node));
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}
void insertnode(node* root, int input_data)
{    
    new = create_node(input_data);
    while (root != NULL){
      current = root;
      
      if(input_data > root->data){
        root = root->right;
      }
      else if(input_data < root->data){
        root = root->left;
      }
    }
    if(current->data > new->data){
      current->left = new;
      
    }
    else if(current->data < new->data){
      current->right = new;
      
    }

}
void createbst(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
  {
    int input_data = 0;
    scanf("%d", &input_data);
    if (root == NULL){
      new = create_node(input_data);
      root = new;
    }
    else{
      insertnode(root, input_data);
    }
}
} 

void preorde(node* ptr){
  if (ptr){
    printf("%d ",ptr->data);
    preorde(ptr->left);
    
    preorde(ptr->right);
  }
}
void inorder(){
  iterator = root;
  b:
  while(iterator != NULL){
    
    push(iterator->data);
    
    iterator = iterator->left;

  }
  if(iterator == NULL && top != NULL){
    nd = pop();
    printf("%d ", nd->data);
    iterator = nd->right;
    goto b;

  }
  if(iterator == NULL && top == NULL){
    return;
  }

}
void preorder(){
  iterator = root;
  b:
  while(iterator != NULL){
    
    push(iterator->data);
    pop();
    iterator = iterator->left;

  }
  if(iterator == NULL && top != NULL){
    
    printf("%d ", nd->data);
    iterator = nd->right;
    goto b;
  }
  if(iterator == NULL && top == NULL){
    return;
  }

}

int main(){
  
  while(3){
  int input_key;
  scanf("%d",&input_key);  
  switch(input_key)
  {
  
    case 1: 
    createbst();
    
    break;
    case 2:
    inorder();
    break;
    case 3:
    preorder();
    break;
    default:
    preorde(root); 
    exit(0);
}
}
    
   
 return 0;   
    
  
}
