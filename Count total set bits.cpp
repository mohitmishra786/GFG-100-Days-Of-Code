   int countSetBits(int n)
   {
       int h = floor(log2(n))  + 1;
       int g = 1;
       int ans = 0;
       for(int i=0;i<h;i++){
           int d = 2*g;
           int gg = (n+1)/d;
           ans += gg*g;
           int rem = (n+1)%d;
           if(rem>g)
           ans += rem%g;
           g= g<<1;
       }
       return ans;
   }
