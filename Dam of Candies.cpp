int maxCandy(int a[], int n) 
   { 
       int i = 0; //start
       int j = n - 1; // end
       int max_dist = 0;
       int curr_max_area = 0;
       int max_area = 0;
       while(i < j) {
           max_dist = j - i - 1;
           if(a[i] > a[j]) {
               curr_max_area = a[j] * max_dist;
               j--;
           } else {
               curr_max_area = a[i] * max_dist;
               i++;
           }
           if(curr_max_area > max_area) {
               max_area = curr_max_area;
           }
       }
       return max_area;
   } 
