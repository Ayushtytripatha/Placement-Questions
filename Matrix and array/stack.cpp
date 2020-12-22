#include<iostream>
using namespace std;
int stack[10];
int top = -1;
int size = 10;

void push(int value){
    if(top==size-1){
        cout<<"Stack is full";
    }
    else{
        top++;
        stack[top] = value;
    }

}
int pop(){
    int temp;
    if(top==-1){
        return -1;
    }
    else{
        temp = stack[top];
        top--;
        return temp;
    }
}
int main(){
    int choice;
    int num;
    cout<<"1 for Push"<<"\n"<<"2 for Pop"<<"\n"<<"3 for print stack"<<"\n"<<"4 for exit()"<<endl;
    cin>>choice;
    do{
        if(choice==1){
            cout<<"Enter the element : ";
            cin>>num;
            push(num);
        }  
        else if(choice==2){
            int temp = pop();
            if(temp==-1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<temp<<" Pop"<<endl;
            }
        } 
       else if(choice==3){
            for(int i=0;i<=top;i++){
                cout<<stack[i];
            }
            cout<<endl;
        }
        else if(choice==4){
            break;
        
        }
        else{
            cout<<"Wrong Input"<<endl;
        }
        cout<<"1 for Push"<<"\n"<<"2 for Pop"<<"\n"<<"3 for print stack"<<"\n"<<"4 for exit()"<<endl;
        cin>>choice;
    }while(choice!=4);
}