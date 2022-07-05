class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    for(int i=0;i<n;i++){
	        if(arr1[i]>arr2[0]){
	            int temp=arr1[i];
	            arr1[i]=arr2[0];
	            arr2[0]=temp;
	        }
	        for(int j=0;j<m-1;j++){
	            if(arr2[j+1]<arr2[j]){
	                int temp=arr2[j];
	                arr2[j]=arr2[j+1];
	                arr2[j+1]=temp;
	            }
	            else break;
	        }
	    }
	}
};
