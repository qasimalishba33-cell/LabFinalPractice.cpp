#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target, int currentIndex = 0)
{
if (currentIndex == n) {
    return -1;
    }
  cout << "Checking index " << currentIndex << ": " << arr[currentIndex];
  if (arr[currentIndex] == target)
  {
   cout << " - Found!" << endl;
  return currentIndex;
    }
    cout << endl;
    return linearSearch(arr, n, target, currentIndex + 1);
}
int main() {
   int arr[10];
   cout<<"Enter 10 elements of array : ";
   for(int i=0;i<10;i++)
    {
    cin>>arr[i];
    }
   int target;
     cout <<"Enter target : ";
    cin>>target;
    int result = linearSearch(arr, 10, target);
if (result != -1)
    {
     cout << "Element found at index: " << result << endl;
     }
else
    {
cout << "Element not found." << endl;
 }
}

