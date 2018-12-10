vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    map<string, vector<int> > mp;
    map<string, vector<int> >::iterator it;
    for(int i=0; i<A.size(); i++) {
        string str = A[i];
        sort(str.begin(), str.end());
        // cout<<"str = " << str << endl;
        mp[str].push_back(i+1);
    }
    
    vector< vector<int> > ans;
    for(it=mp.begin(); it!=mp.end(); it++) {
        // cout << "first: " << it->first<<endl;
        if(it->second.size() > 0) {
            ans.push_back(it->second);
        }
    }
    return ans;
}
