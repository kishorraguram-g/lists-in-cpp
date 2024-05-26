#include<iostream>
#include<list>

using namespace std;
void printusingiterator(list<int>li){
      list<int>::iterator itr;
      for(itr=li.begin();itr!=li.end();itr++){
               cout<<*itr<<" ";
      } 
      cout<<endl;
}
void print(list<int>li){
    for(int i:li){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    list<int>list1(10,5);
    print(list1);
     // printusingiterator(list1);
}