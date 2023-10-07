class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	   int i=0;
	   int temp;
	   for(int j=0;j<n;j++){
	       if(arr[j]!=0){
	           temp=arr[j];
	           arr[j]=arr[i];
	           arr[i]=temp;
	           i++;
	       }
	   }
	}
};