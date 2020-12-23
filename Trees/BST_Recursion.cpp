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
struct node* insert(node *root,int key){
    
    if (root == NULL) {
        node *temp = new node();
        temp->data = key;
        temp->left = temp->right = NULL;
        return temp;
    } 
  
    /* Otherwise, recur down the tree */
    if (key < root->data) 
        root->left = insert(root->left, key); 
    else if (key > root->data) 
        root->right = insert(root->right, key); 
    return root;
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
        
        root = insert(root,arr[i]);
    }
    // cin>>q;
    // search(root,q);
    printInorder(root);
     

}