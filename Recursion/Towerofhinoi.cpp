#include<iostream>
using namespace std;
void tower(int n,char s,char a,char d){
    if(n==0){
        return;
    }
    tower(n-1,s,d,a);
    cout<<n<<" from "<<s<<" to "<<d<<endl;
    tower(n-1,a,s,d);
}
int main(){
    int disk;
    char s = 's';
    char a = 'a';
    char d = 'd';
    cin>>disk;
    tower(disk,s,a,d);
}