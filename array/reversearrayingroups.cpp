class Solution{
    void reverse(vector<long long>& arr, int s, int e) {
        while(s <= e) {
            swap(arr[s], arr[e]);
            s++, e--;
        }
    }
    
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int i=0;
        
        while(i < n) {
            
            if(i+k-1 >= n) {
                reverse(arr, i, n-1);
                break;
            }
            else {
                reverse(arr, i, i+k-1);
                i = i+k;   
            }
        }
    }
};