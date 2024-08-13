#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
    int age;
    string name;

    bool operator < (const Person &other)const{
        return age < other.age;
    }

};

int main(){
    // Class
    set<Person>s;
    Person p1, p2, p3;
    p1.age = 10, p1.name = "rohit";
    p2.age = 50, p2.name = "kohit";
    p3.age = 12, p3.name = "sohit";

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
      
    for(auto it=s.begin(); it != s.end(); it++){
        cout<<it->age<<" "<<it->name<<endl;
    }









    // set<int>s = {1,3,45,63,1,2};
    // set<int> s;
    // // set<int, greater<int>> s;
    // s.insert(10);
    // s.insert(101);
    // s.insert(12);
    // s.insert(13);
    // s.insert(13);
    // s.insert(10);

    // s.clear();
    
    // find()
    // if(s.find(10) != s.end()){
    //     cout<<"present";
    // }
    // else{
    //     cout<<"Absent";
    // }

    // count()
    // if(s.count(14))
    // cout<<"Present";
    // else
    // cout<<"Absent";

    // cout<<s.count(10);

    // erase()
    // s.erase(10);
    

    // for(auto it = s.begin(); it!=s.end(); it++){
    //     cout<<*it<<" ";
    // }

    // for(auto i : s){
    //     cout<<i<<" ";
    // }


    // class implement
    

    
  return 0;
}