class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   int i=0;int j=0;int k=0;
	   while(i<n){
	       res[k]=a[i];
	       i++;
	       k++;
	   }
	   while(j<m){
	       res[k]=b[j];
	       j++;
	       k++;
	   }
	   sort(res,res+n+m);
	}

};
	  