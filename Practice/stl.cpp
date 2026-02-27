#include <iostream>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    cout << "Hello World" << "/n";
    return 0;
}

//Pairs
void explainPair() {
    
    pair<int, int> p1 = {1, 1};

    cout << p1.first << " " << p1.second;

    pair<int, pair<int, int>> p2 = {1, {3, 2}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second;

    pair<int, int> arr[] = {{1, 2}, {3, 5}, {5, 6}};

    cout << arr[1].second << endl;

}

void explainVector() {

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 5); //autmatically assumes it to be a pair and pushes it into the vector

    vector<int> v(5, 100);

    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << endl;

    it = it + 2;
    cout << *(it) << endl;

    vector<int>::iterator it = v.end();

    vector<int>::reverse_iterator rit = v.rbegin();

    vector<int>::reverse_iterator rit2 = v.rend();

    cout << v[0] << " " << v.at(0) << endl;

    cout << v.back() << endl;

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << endl;
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << endl;
    }

    for(auto it: v) {
        cout << it;
    }

    //{10, 20, 12, 23, 35}
    v.erase(v.begin() + 1); //new vector will be {10, 12, 23, 35}

    //{10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); //new vector will be {10, 20, 35} [start, end)

    //Insert function

    vector<int> v(2, 100); //{100, 100}
    v.insert(v.begin(), 300); //{300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); //{300, 10, 10, 100, 100}

    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()); //{50, 50, 300, 10, 10, 100, 100}

    //{10, 20}
    cout << v.size() << endl; //2

    //{10, 20}
    v.pop_back(); //{10}

    //v1 -> {10, 20}
    //v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40} v2 -> {10, 20}
    v.clear(); //empties the vector

    cout << v.empty(); //returns a boolean value whether the vector is empty or not
}

void explainDeque() {

    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(3); // {3, 1, 2}
    dq.emplace_front(4); // {4, 3, 1, 2}

    dq.pop_back(); // {4, 3, 1}
    dq.pop_front(); // {3, 1}

    dq.back(); 
    dq.front();

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, swap, size
}

void explainStack() {

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    cout << st.top() << endl; // prints 5

    st.pop(); // stack looks like {4, 3, 2, 1}

    cout << st.top() << endl; // 4
    cout << st.size() << endl; // 4

    cout << st.empty() << endl; // returns false

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue() {

    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(3); // {1, 2, 3}
    q.push(4); // {1, 2, 3, 4}
    q.emplace(5); // {1, 2, 3, 4, 5}

    cout << q.back() << endl; // prints 5

    q.back() += 5; // {1, 2, 3, 4, 10}

    cout << q.back() << endl; // 10

    cout << q.front() << endl; // prints 1

    q.pop(); // queue looks like {2, 3, 4, 10}

    cout << q.front() << endl; // 2
    cout << q.size() << endl; // 4

    cout << q.empty() << endl; // returns false

    queue<int> q1, q2;
    q1.swap(q2);
}

void explainPQ() {
    // Max Heap (by default)
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.push(10); // {10, 8, 5, 2}
    pq.emplace(12); // {12, 10, 8, 5, 2}

    cout << pq.top() << endl; // prints 12

    pq.pop(); // {10, 8, 5, 2}

    cout << pq.top() << endl; // 10
    cout << pq.size() << endl; // 4

    cout << pq.empty() << endl; // returns false

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5); // {5}
    minpq.push(2); // {2, 5}
    minpq.push(8); // {2, 5, 8}
    minpq.push(10); // {2, 5, 8, 10}
    minpq.emplace(1); // {1, 2, 5, 8, 10}

    cout << minpq.top() << endl; // prints 1

    // push and pop are O(logn) operations while top is O(1) operation
}

void explainSet() {
    // stores everything in sorted order and unique
    set<int> st;
    
    st.insert(1); // {1}
    st.insert(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}
    st.emplace(5); // {1, 2, 3, 4, 5}

    // Functionality of insert in vector can be used also
    // only increases efficiency

    // begin(), end(), rbegin(), rend(), size(), empty(), swap() same as above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // returns an iterator which points to 3

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // returns st.end() if element is not found

    // {1, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time

    int cnt = st.count(1); // returns 1 if element is present, 0 if not present

    auto it = st.find(3);
    st.erase(it); // takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() functions work the same way as in vector
    // this is the syntax

    auto it = st.lower_bound(2); // returns an iterator pointing to 2
    auto it = st.upper_bound(3); // returns an iterator pointing to element after 3

    // all operations are O(logn) time complexity
}

void explainMultiSet() {
    // everything same as set, only stores duplicate elements also
    // stores elements in sorted order
    multiset<int> ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    ms.insert(2); // {1, 1, 1, 2}
    ms.emplace(3); // {1, 1, 1, 2, 3}

    // all operations are same as set
    // only difference is that it can store duplicate elements

    ms.erase(1); // erases all 1's // {2, 3}

    int cnt = ms.count(1); // returns count of 1's

    // only a single 1 erased
    ms.erase(ms.find(1)); // erases first occurrence of 1

    // erases elements in range [first, last)
    auto it1 = ms.find(1);
    auto it2 = ms.find(1);
    advance(it2, 2); // moves iterator 2 positions ahead
    ms.erase(it1, it2); // erases 2 occurrences of 1

    // rest all functions same as set
    // all operations are O(logn) time complexity
}

void explainMap() {
    // stores unique keys in sorted order
    // key-value pairs
    map<int, int> mpp;

    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp[1] = 2; // {{1, 2}}
    mpp.emplace(3, 1); // {{1, 2}, {3, 1}}
    mpp.insert({2, 4}); // {{1, 2}, {2, 4}, {3, 1}}

    mpp2[{2, 3}] = 10; // {{{2, 3}, 10}}

    // iterating over map
    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // or

    for(auto it = mpp.begin(); it != mpp.end(); it++) {
        cout << (*it).first << " " << (*it).second << endl;
    }

    cout << mpp[1]; // prints 2
    cout << mpp[5]; // prints 0 if key doesn't exist

    auto it = mpp.find(3); // returns iterator pointing to key 3
    cout << (*it).second; // prints 1

    auto it = mpp.find(5); // returns mpp.end() if key doesn't exist

    // lower_bound and upper_bound same as in set
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase, swap, size, empty same as above
    // all operations are O(logn) time complexity
}

void explainMultiMap() {
    // everything same as map, only it can store duplicate keys
    // stores keys in sorted order
    // map stores unique keys, multimap can have multiple same keys
    
    multimap<int, int> mmp;
    
    mmp.insert({1, 2}); // {{1, 2}}
    mmp.insert({1, 3}); // {{1, 2}, {1, 3}}
    mmp.insert({2, 4}); // {{1, 2}, {1, 3}, {2, 4}}
    
    // rest all functions same as map
}

void explainUnorderedMap() {
    // same as map but does not store in any particular order
    // stores in random order using hashing
    // has unique keys
    
    unordered_map<int, int> ump;
    
    ump[1] = 2;
    ump[3] = 1;
    ump[2] = 4;
    
    // most operations are O(1) average case
    // worst case can be O(n) but very rare
    // does not have lower_bound and upper_bound
    // rest all functions same as map
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same
    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra() {
    int a[] = {1, 5, 3, 2};
    int n = 4;
    vector<int> v = {1, 5, 3, 2};
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a+2, a+4);

    sort(a, a+n, greater<int>());

    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}, {3, 4}};

    // sort it according to second element
    // if second element is same, sort it according to first element in decreasing order
    // comp function needs to be defined separately

    sort(arr, arr+n, comp);

    // {{4, 1}, {2, 1}, {1, 2}, {3, 4}}

    int maxi = *max_element(a, a+n); // returns the maximum element
    int mini = *min_element(a, a+n); // returns the minimum element
}