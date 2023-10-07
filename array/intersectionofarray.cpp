 int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
    
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0,count=0,last=INT_MIN;
        while(i<n && j<m){
            if(a[i]==b[j]){
                if(last!=a[i]){
                    count++;
                    last = a[i];
                }
                i++;
                j++;
            }
            else if(a[i]>b[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return count;
    }
