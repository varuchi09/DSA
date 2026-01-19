#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<set>

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


    list<int> ls;                  //LIST

    stack<int> s;                 //STACK
    s.push(3);                    //{3}
    s.push(2);                    //{2,3}

    deque<int> dq;                //DEQUE

    queue<int> q;                //QUEUE

    priority_queue<int> pq;      //PRIORITY_QUEUE (highest priority)
    pq.push(5);                 //{5}
    pq.push(2);                 //{5,2}
    pq.emplace(10);             //{10,5,2}
    pq.top();                  //10
    pq.pop();                 //{5,2}

    //for lowest priority
    priority_queue<int, vector<int>, greater<int>> pq;       //{2,5,10}

    set<int> st;            //SET
    st.insert(1);           //{1}
    st.emplace(3);          //{1,3}
    st.emplace(2);          //{1,2,3}
    st.erase(2);
    int count = st.count(1);       //0 if element not there else 1
    auto it1 = st.find(1);        
    auto it2 = st.find(3);
    st.erase(it1, it2);        // {3}  [start,end)

    multiset<int> ms;          //MULTISET
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);              //{1,1,1}
    ms.erase(1);                 //all 1s are erased
    ms.erase(ms.find(1));        // 1st 1 is erased
}