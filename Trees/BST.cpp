#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
};
void printInorder(struct node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(node->left); 
  
    /* then print the data of node */
    cout << node->data << " "; 
  
    /* now recur on right child */
    printInorder(node->right); 
} 
void search(node *root,int key){
    if(root==NULL)
        return;
    
    search(root->left,key);
    if(root->data == key ){
        cout<<"Key is present";
    }
    search(root->right,key);
       
}
void insert(node *root,int key){
    node *temp = new node();
    temp->data = key;
    temp->left = temp->right = NULL;
    while(1){
        if(root->data<key){
            if(root->right){
                root = root->right;
            }
            else{
                root->right = temp;
                break;
            }
        }
        else{
            if(root->left){
                root = root->left;
            }
            else{
                root->left = temp;
                break;
            }
        }
    }
}
int main(){
    node *root = NULL;
    int n,q;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    root = new node();
    root->data = arr[0];
    root->left = root->right =NULL;
    for(int i=1;i<n;i++){
        
        insert(root,arr[i]);
    }
    cin>>q;
    search(root,q);
    //printInorder(root);
     

}