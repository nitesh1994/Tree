#include<iostream>
using namespace std;
int search(int A[],int x,int n)
{
    for(int i=0;i<n;i++)
    if(A[i]==x)
    return i;
    return -1;

}
void postorder(int in[],int pre[],int size)
{
    int root=search(in,pre[0],size);
    
    if(root!=0)
    postorder(in,pre+1,root);
    
    if(root!=size-1)
    postorder(in+root+1,pre+root+1,size-root-1);
    
    cout<<pre[0];
    

}
int main()
{
    int in[]={4,2,5,1,3,6};
    int pre[]={1,2,4,5,3,6};
    int size=sizeof(in)/sizeof(in[0]);
    cout<<"The postorder traversal of the tree is->";
    postorder(in,pre,size);




}

