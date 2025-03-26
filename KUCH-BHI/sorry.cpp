#include <iostream>
using namespace std;
class sorry{
    int numOfMistake;
    string Mistake[15];
    public:
    sorry(int n, string m[15]){
        numOfMistake = n;
        for(int i = 0; i < n; i++){
            Mistake[i] = m[i];
        }
    }
    void display() {
        for(int i=0; i<numOfMistake; i++){
            cout<<"I am sorry sister for : "<<Mistake[i]<<endl;
        }
    }

};
    int main(){
    string m[15];
    int n;
    cout << "Enter the number of mistakes: ";
    cin >> n;
    
    for(int i=0; i<n; i++){
        cout<<"Enter the " <<i+1 <<" mistake: ";
        cin>>m[i];
    }

    for(int i = 0; i < n; i++){
    }
    sorry s(n, m);
    s.display();
    return 0;
}

