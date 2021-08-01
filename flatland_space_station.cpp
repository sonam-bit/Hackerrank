#include <bits/stdc++.h>
using namespace std;

//to calculate minimum distance between space station and city
int minDistance(int arr[], int x, int m)
{
  int min= abs(arr[0]-x);
  for(int i=0; i<m; i++)
   {
      
     if(min> abs(arr[i]-x))
      min= abs(arr[i]-x);
    
   }
   return min;
}
//the maximum distance from any city to its nearest space station
int maxDistance(int arr[], int m, int n)
{ int res[n],count=0,max;
     if(n==m)
   return 0;

  max= minDistance(arr, 0,m);

  for(int i=1; i<n;i++)
  {

    if(minDistance(arr, i,m)>max)
      max = minDistance(arr, i,m);
  }
  return max;
    
}

int main(){
    int m, n;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m;i++)
     cin>>arr[i];
    cout<<maxDistance(arr , m, n);
    return 0;

}


 