 void sortColors(vector<int>& arr) {
    int k = arr.size()-1, i = 0, j = 0;
    
  while(j <= k)
  {
      if(arr[j]==0) swap(arr[j++],arr[i++]);
      else if(arr[j]==1) j++;
      else swap(arr[j],arr[k--]);
  } 
  return;
    }
