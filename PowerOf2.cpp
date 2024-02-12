#include<iostream>

#include<climits>

using namespace std;

int main() {

int n;

cout << "ENTER THE NUMBER : ";

cin >> n;

int ans = 1;

for(int i=0; i<=30; i++) {

if(ans == n) {

cout << "POWER OF 2 RAISE TO " << i;

}

if(ans < INT_MAX/2) 

ans = ans*2;

}

return 0;
        
}