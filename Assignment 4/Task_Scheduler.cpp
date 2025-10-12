#include<iostream> 
#include<string> 
using namespace std; 
class Node{ 
    public: 
    int priority, exe_time; 
    string name; 
    Node* next; 
    Node(string s,int p,int t){ 
        name=s; 
        priority=p; 
        exe_time=t; 
        next=NULL; 
    } 
    void display(){ 
        cout<<"Name: "<<name<<endl; 
        cout<<"Priority: "<<priority<<endl; 
        cout<<"Execution Time: "<<exe_time<<endl; 
    } 
 
}; 
int main(){ 
    string s; 
    int p,t,n; 
    Node* header=NULL,*curr=NULL; 
    cout<<"Enter Number of Nodes: "; 
    cin>>n; 
    for(int i=0;i<n;i++){ 
        cout<<"Node "<<i+1<<endl; 
        cout<<"Name: "; 
        cin>>s; 
        cout<<"Priority: "; 
        cin>>p; 
        cout<<"Time: "; 
        cin>>t; 
        Node* temp=new Node(s,p,t); 
    if(header==NULL || header->priority < temp->priority){ 
        temp->next=header; 
        header=temp; 
    } 
    else{ 
        curr=header; 
        while(curr->next!=NULL && curr->next->priority >=temp->priority){ 
            curr=curr->next; 
        } 
        temp->next=curr->next; 
        curr->next=temp; 
    } 
} 
cout<<"Displaying All Nodes\n"; 
Node *t1=header; 
while(t1!=NULL){ 
    t1->display(); 
    cout<<"----------------\n"; 
    t1=t1->next; 
} 
return 0; 
}
