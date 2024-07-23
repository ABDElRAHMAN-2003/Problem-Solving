#include <bits/stdc++.h>


using namespace std;


int main()
{
     set: https://www.cplusplus.com/reference/set/set/

    set<int> st;
    string s;
    cin>>s;
    for(int i = 0 ; i < s.length(); i++)
        st.insert(s[i]); /// Log(n)
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        if(st.count(c)) /// Log(n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    cout<<st.size()<<" "<<st.empty();
    for(auto x: st) /// O(nlogn)
    {
        cout<<x<<" ";
        break;
    }
    int fin = -1;
    for(auto x: st)
        fin = x;
    cout<<fin;
    cout<<*(st.begin()) <<" "<<*(st.rbegin()); /// Getting first element in set, last element in set
    /// lower_bound ==> gets the first element in the sorted array that is not less than x
    /// upper_bound ==> gets the first element in the sorted array that is more than x
    *(st.lower_bound(x));  /// Address de-refrencing
    *(st.upper_bound(x));


    // multiset: https://www.cplusplus.com/reference/set/multiset/
    multiset<int> mst; /// Carry multiple values but with order

    // unordered_set: https://www.cplusplus.com/reference/unordered_set/unordered_set/
    // beware: https://codeforces.com/blog/entry/62393
    unordered_set<int> uost; /// Unique but without order

    /// How to earse from normal set?
    st.erase(x);
    if(mst.count(x))
        mst.erase(mst.lower_bound(x)) /// To remove only one occurence

    // ordered_set: https://www.geeksforgeeks.org/ordered-set-gnu-c-pbds/
    //              https://codeforces.com/blog/entry/11080

    // priority_queue: https://www.cplusplus.com/reference/queue/priority_queue/
    priority_queue<int> pq; /// Max heap
    priority_queue<int, vector<int> , greater<int> > pq2; /// Min heap
    int n; cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        int x; cin>>x; pq.push(-x);
    }
    while(!pq.empty())
    {
        cout<<-1*pq.top()<<" "; pq.pop();
    }

    // STLs tips and tricks: https://codeforces.com/blog/entry/74684

    return 0;
}
