    int repeatedStringMatch(string A, string B) 
    {
        // Your code goes here
        int n = B.length()/A.length();
        string C = A;
        for(int i = 0 ; i < n + 2 ; i++){
            if(A.find(B) != string::npos){
                return i + 1;
            }
            A+=C;
        }
        return -1;
    }
