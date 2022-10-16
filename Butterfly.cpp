#include<iostream>
using namespace std;

int main(){

   int n=4;

   for (int i = 1; i <=n; i++)
   {
    /* code */for (int j = 1; j <=i; j++)
    {
    cout<<" x ";
    }

    int space= 2*n-2*i;
    for (int j = 1; j <=space; j++)
    {
        /* code */cout<<"   ";
    }
    
    for (int j = 1; j <=i; j++)
    {
    cout<<" x ";
    }
    cout<<endl;
    
    
  
   }
   
return 0;
}
