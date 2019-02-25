#include <bits/stdc++.h>
using namespace std;
#include <vector>


int partition(vector<int> & arr, int l , int h) {
    int p = h;
    int i = l;

    for (int j = l; j < h; j++) {
        if (arr[j] < arr[p]) {
            swap(arr[i], arr[j]);i++;
        }
    }
    swap(arr[p], arr[i]);

    return i;
}

void qs(vector <int> &arr, int low, int high) {
	
    if (low == high) return;
    if (low > high) return;
    int pivot = partition(arr, low, high);
    //cout << "Pivot :" << arr[pivot] << endl;
    qs(arr, low, pivot - 1);
    qs(arr, pivot + 1, high);

}


int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);

    
    for (int i = 0; i < (int)n; ++i) {
      cin >> arr[i];
    }
    int low = 0, high = arr.size() - 1;
    //cout << "low " << low << "high " << high << endl;
    qs(arr, low, high);
    for (int i = 0; i < (int)n; ++i) {
      cout << arr[i];
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#include <vector>


int partition(vector<int> & arr, int l , int h) {
    int p = arr[l];
    int w = h;
    //cout << "L :" << l << "H: "<< h << endl; 
    for (int r = h ; r > 0; r--) {
        if (arr[r] > p) {
            swap(arr[r], arr[w]);
            w--;
        }
    }    
    swap(arr[w], arr[l]);
 
    return w;
}

void qs(vector <int> &arr, int low, int high) {
	
    if (low == high) return;
    if (low > high) return;
    int pivot = partition(arr, low, high);
   
    qs(arr, low, pivot - 1);
    qs(arr, pivot + 1, high);

    for (int i = low; i <= high; ++i) {
      cout << arr[i] << " "; 
    }
    cout << endl;
}


int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);

    
    for (int i = 0; i < (int)n; ++i) {
      cin >> arr[i];
    }
    int low = 0, high = arr.size() - 1;
    //cout << "low " << low << "high " << high << endl;
    qs(arr, low, high);

    return 0;
}


