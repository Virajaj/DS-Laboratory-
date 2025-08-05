/*
When playing card games, players often use an approach similar to 
insertion sort to  organize their cards. They pick one card at a time 
and insert it into the correct     position in their hand, maintaining a 
sorted sequence. Write a program that demonstrates how to organize 
(sort) cards in a hand using insertion sort
*/
#include<iostream>

int main()
{    
    using namespace std;
    int n = 3;
    unsigned int arr[n];
    cout<<"Enter The Numbers"<<endl;
    for(int k=0;k<n;k++)
    {
        cin>>arr[k];
    }
    for(int i=1;i<n;i++)
    {    
        int j = i-1;
        unsigned int key = arr[i];
        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
            
            
        }
        arr[j+1]=key;
        
    }
    cout<<"The Sorted Array is \n";
    for(int m=0;m<n;m++)
    {
        cout<<arr[m]<<"\t\t";
    }
    return 0;
    
}



