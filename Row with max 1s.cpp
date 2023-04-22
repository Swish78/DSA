//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int temp = 0,BE = -1;
	    for(int i = 0;i<n;i++){
	        int cnt = 0;
	        for(auto s : arr[i]){
	            if(s == 1){
	                cnt++;
	            }
	        }
	        if(temp<cnt){
	            BE = i;
	            temp = cnt;
	        }
	    }
	    return BE;
	}

};
