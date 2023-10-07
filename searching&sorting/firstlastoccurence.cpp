class Solution
{
    public:
    int firstOcc(vector<long long>&v,int n,long long x){
        int s=0;
        int e=n-1;
        int mid= s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(v[mid]==x){
                ans=mid;
                e=mid-1;
            }
            else if(x > v[mid]){
                s= mid+1;
            }
            else if(x< v[mid]){
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
    int lastOcc(vector<long long>&v,int n,long long x){
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        
        int ans=-1;
        
        while(s<=e){
            if(v[mid]==x){
                ans= mid;
                s=mid+1;
            }
            else if(x>v[mid]){
                s= mid+1;
            }
            else if(x< v[mid]){
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }
        return ans;
    }
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        int n = v.size();
        pair<long,long>p;
        p.first=firstOcc(v,n,x);
        p.second=lastOcc(v,n,x);
        
        return p;
    }
