vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int>s;
        
        for(int i=0;i<=n-1;i++){
            s.insert(arr1[i]);
        }
        for( int i=0;i<=m-1;i++){
            s.insert(arr2[i]);
        }
        vector<int>ans;
        for(auto i: s){
            ans.push_back(i);
        }
        
        return ans;
    }