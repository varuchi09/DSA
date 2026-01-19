#include<vector>
#include<iostream>
using namespace std;

int main(){
    vector<int> v;
    vector<int> vec = {1,2,3};
    vector<int> vec1 (3,78);      //(size,value)
  
    v.push_back(1);
    v.emplace_back(2);      //faster than push_back()
    v.emplace_back(3); 
    v.emplace_back(4); 

    // v.pop_back();             for removing

    cout<< v.size() <<endl;

// for accessing element
    cout<< v[1] <<endl;
    cout<< vec.at(0) <<endl;
    cout<< vec.front() <<endl;             //points to first element
    cout<< vec.back() <<endl;              //points to last element

    for(int i : vec){                      // for each loop 
        cout<< i << " ";
    }
    cout<<endl;

    // iterators

    vector<int>::iterator it = v.begin();
    cout<< *(it) << " " ;
    it ++; 
    cout<<endl;

// for printing whole vector

    for(auto it = v.begin(); it != v.end(); it++){
        cout<< *(it) << " ";
    }
    cout<<endl;

    for(auto it : vec){
        cout<< it << " ";             //it here is element
    }
    cout<<endl; 

    v.erase(v.begin());      //delete first element
    v.erase(v.begin()+1, v.begin()+3);    //{1,2,3,4} -> {1,4}   [start,end )

    // insertion
    v.insert(v.begin()+1, 2, 10);        //{1,10,10,2,3,4}

    //swapping
    v.swap(vec);


    v.clear();    //clears vector
    cout<< v.empty() << endl;           //true
}