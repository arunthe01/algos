#include<iostream>
using namespace std;

int main(){
        cout<<"Enter the text : ";
        string txt, pat;
        cin>>txt;
        cout << "Enter the pattern : ";
        cin>>pat;
        int max = (txt.length()-pat.length());
        int j;
        for(int i = 0 ; i<=max ; i++){
                j =0;
                while(pat[j]==txt[i+j]){
                        j++;
                        if(j==pat.length()){
                                cout<<"found at "<< i;
                                return 0;
                        } 
                }
        }
        cout<<"not found";
                
}
