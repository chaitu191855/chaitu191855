#include<bits/stdc++.h>
 using namespace std; 
 bool checkprime(int n) 
 { 
  if(n==1)
  { 
  return false; 
  } 
  if(n==2 || n==3) 
  { 
  return true; 
  } 
  if(n%2==0 || n%3==0) 
  { 
  return false; 
  }
   for(int i=5;i*i<n;i+=6) 
   {
   	 if(n%i==0 || n%(i+2)==0)//19
   	  { 
   	  return false; 
   	  } 
   } 
   return true; 
 } 
 int main() 
 { 
 int n; 
 cin>>n;
 cout<<checkprime(n);
  }