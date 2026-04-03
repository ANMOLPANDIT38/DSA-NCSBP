#include <iostream>
#include <climits> //to use int max and int min so we include this 
using namespace std;
int main(){
    // take n input ()
    int n;
    cout<<"enter the how many nummbers ";
    cin>>n;
    
    int min=INT_MAX;
    int max=INT_MIN;
    int sum=0;
    int number;

    int i=1;
    while(i<=n){

        cout<<"enter a number";
        cin>>number;

        // yha par hamne else isliye nhi lagya quki koi single number min bhi hojayega or max bhi 
        if(number>max){
            max=number;
        }
        if(number<min){
            min=number;

        }
        sum=sum+number;

        i++;
    }
    cout<<"minimum "<<min<<endl;
    cout<<"maximum "<<max<<endl;
    cout<<"sum "<<sum/(n*1.0)<<endl; //change into float to multiply by 1.0


    
    return 0;
}