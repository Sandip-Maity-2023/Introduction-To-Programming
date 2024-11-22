//
// Created by 12san on 25-09-2024.
//
#include<iostream>
using namespace std;

void tower_of_hanoi(int n,char from_rod,char to_rod,char to_aux) {
    if (n == 1) {
        cout << " Move disk 1 from rod " << from_rod << " to red " << to_rod<<endl;
        return;
    }
    tower_of_hanoi(n-1,from_rod,to_aux,to_rod);
    cout<<" Move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;

    tower_of_hanoi(n-1,to_aux,to_rod,from_rod);

}
int main(){
    int n;
    cout<<"Enter the number of Disks:\n";
    cin>>n;
    tower_of_hanoi(n,'A','C','B');
    return 0;
}