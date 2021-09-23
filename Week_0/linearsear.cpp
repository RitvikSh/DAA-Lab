#include<iostream>
using namespace std;

int main(){
    int n, key, size, c=0;
    
    cout<<"Input no. of test cases:";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Input size of array:"<<endl;
        cin>>size;
        int arr[size];
        for(int j=0; j<size; j++){
            cin>>arr[j];
        }
        cout<<"Input key:";
        cin>>key;

        cout<<"Size of array:"<<size<<endl;
        for(int k=0; k<size; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
        cout<<"key :"<<key<<endl;


// Linear Search.
        for(int i=0; i<n; i++){

            if(arr[i]==key){
                c=1;
                cout<<"Element Found."<<endl;
                break;
            }
            else
            {
                c=0;
            }
    
        }

        if(c==0){
            cout<<"Element not Found."<<endl;
        }


    }
}
