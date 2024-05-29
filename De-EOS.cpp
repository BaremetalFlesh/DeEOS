// Cole Durbin 2024 //
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cstring>
using namespace std;
char confirm[2];
void remove() { // Removes all EOS software
	system("yes | sudo pacman -R $(echo $(pacman -Qqs eos-))");
}
int main(){
	cout << "this software will remove ALL EndeavourOS software from your machine, are you sure you want to do this (y/n)";
	cin >> confirm;
	 if (strcmp(confirm, "y") == 0) {
        cout << "Proceeding with removal.\n";
    } else {
        cout << "Aborting removal.\n";
        return 0; // Ends program
    }
    cout << "All programs listed below will be removed.";
    system("pacman -Qs eos"); // Lists installed EOS software
    remove();
}