#include<iostream>
#include<vector>
using namespace std;

  int main(){
//front()
 vector<int> v = {1,2,3};
 cout<<v.front()<<endl; 
 cout<<v.back()<<endl;
 cout<<v.empty()<<endl;//return 0
 cout<<v.front()<<endl;
 v.clear();//removes all the elements
/*
for non empty vectors front() returns a reference to the first element 

for non empty vectors back() returns reference to the last element    
*/
if(v.empty()){
  cout<<"Vector is empty";
}
else{
  cout<<"Not empty";
}
//checks if vector is empty


  return 0;
}
