// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    int countSquares(int N) 
    {
        // 01
        // return sqrt(N-1);
        
        //02
        
       int i=1, count =0;
    
        while((i*i)<N)   // 1*1 <N  // 2*2=4<9   // 3*3=9<9
        {
           i+=1;         // i=2   //i=3
           count+=1;     // 1     //2
           
         }
          return count;    // return 2
    }
    
        
        
    
    
};



// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}  // } Driver Code Ends