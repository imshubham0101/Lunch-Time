#include <iostream>

using namespace std;

int evendiff(int* arr , int n)
{
   int oddCount = 0; 
   int evenCount = 0 ;
   for(int i=0 ; i<n ; i++){
       if(arr[i] % 2 == 0)
        evenCount++ ;
        else
        oddCount++ ;
        
   } 
   if(evenCount == 0 || oddCount == 0)
    return 0 ;
    int min = (oddCount < evenCount) ? oddCount : evenCount ;
    return min ;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << evendiff(arr,n) << endl;
    }
}