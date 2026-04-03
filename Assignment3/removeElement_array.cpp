#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[100];   
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int j=0;
    for(int i=0;i<N;i++){
        if(arr[i]!=target){
            arr[j]=arr[i];
            j++;
        }
    }

    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
