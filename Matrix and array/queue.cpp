#include<iostream>
using namespace std;
int queue[10];
int front = -1;
int rear = -1;
int size = 10;

void enqueue(int value){
    if(rear==size-1){
        cout<<"Queue is full";
    }
    else{
        if(front==-1){
            front++;
        }
        rear++;
        queue[rear] = value;
    }

}
int dequeue(){
    int temp;
    if(front==-1){
        return -1;
    }
    else{
        temp = queue[front];
        front++;
        if(front>rear){
            front = -1;
            rear = -1;
        }
        return temp;
    }
}
int main(){
    int choice;
    int num;
    cout<<"1 for enqueu"<<"\n"<<"2 for dequeue"<<"\n"<<"3 for print queue"<<"\n"<<"4 for exit()"<<endl;
    cin>>choice;
    do{
        if(choice==1){
            cout<<"Enter the element : ";
            cin>>num;
            enqueue(num);
        }  
        else if(choice==2){
            int temp = dequeue();
            if(temp==-1){
                cout<<"Queue is empty"<<endl;
            }
            else{
                cout<<temp<<" dequeue"<<endl;
            }
        } 
       else if(choice==3){
            for(int i=0;i<=rear;i++){
                cout<<queue[i];
            }
            cout<<endl;
        }
        else if(choice==4){
            break;
        
        }
        else{
            cout<<"Wrong Input"<<endl;
        }
        cout<<"1 for enqueu"<<"\n"<<"2 for dequeue"<<"\n"<<"3 for print queue"<<"\n"<<"4 for exit()"<<endl;
        cin>>choice;
    }while(choice!=4);
}