#include <iostream>
using namespace std;

int main() {
	int freq[26]={0};

    char a[]="adbebacc";
    char b[]="ebaadbz";
    for(int i=0; a[i] != '\0';i++){
        int indx=a[i]-'a';
        freq[indx]++;
    }

    for(int i=0;b[i] !='\0';i++){
        int index=b[i];
    }

    

	return 0;
}