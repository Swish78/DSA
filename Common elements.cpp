vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
            //code here.
            vector<int>ans;
            map<int,int>sol;
            for(int i = 0;i<=n1;i++){
                if((binary_search(B,B+n2,A[i])) && (binary_search(C,C+n3,A[i]))){
                    sol[A[i]];
                }
            }
            for(auto x : sol){
                if(x.first>0){
                ans.push_back(x.first);
                }
            }
            return ans;
        }
