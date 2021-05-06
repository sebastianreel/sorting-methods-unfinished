// Name: Sebastian Reel
// Date Due: 3/28/2021
// Project: Sorting Algorithms

// Redone project new due date May 5th, 2021
// git push to homework 4 - reallyseb for UNR Teaching
// after done, import to own repository for own use

#include <iostream>
#include <fstream>
#include <random>
#include <chrono>
#include "bubble.h"
#include "selection.h"
#include "merge.h"
using namespace std;\

void randomGen1k(int array[]);
void randomGen10k(int array[]);
void randomGen100k(int array[]);
void presetGen1k(int array[]);
void presetGen10k(int array[]);
void presetGen100k(int array[]);

int main(){
    Bubble bubbleR;
    Bubble bubbleP;
    Selection selectionR;
    Selection selectionP;
    Merge mergeR;
    Merge mergeP;

    int choice, CPU_time;
    int x = 1;
    int array1k[1000], array10k[10000], array100k[100000];
    srand(time(0));

    while(choice != 0){
        cout << "SORT (BUBBLE, SELECTION, AND MERGE)" << endl;
        cout << "1. Run 1000 Times" << endl;
        cout << "2. Run 10000 Times" << endl;
        cout << "3. Run 100000 Times" << endl;
        cin >> choice;
        
        switch(choice){
            case 1:
                while(x != 10){
                    presetGen1k(array1k);
                    bubbleP.sort(array1k, 1000);

                    cout << "Run: " << x << " " << endl;
                    bubbleR.printRun();
                    x++;
                }
            break;
            case 2:
                while(x != 10){
                    presetGen10k(array10k);
                    bubbleP.sort(array10k, 10000);

                    cout << "Run: " << x << " " << endl;
                    bubbleR.printRun();
                    x++;
                }
            break;
            case 3:
                while(x != 10){
                    presetGen100k(array100k);
                    bubbleP.sort(array100k, 100000);

                    cout << "Run: " << x << " " << endl;
                    bubbleR.printRun();
                    x++;
                }
            break;
            case 0:
            break;
        }
    }
    return 0;
}

void randomGen1k(int array[]){
    int x;
    int n = 1000;
    ofstream fp("1k_randomfile.txt");

    if(fp.is_open()){
        for(int i = 0; i < n; i++){
            x = rand() % 106;
            fp << x << endl;
            array[i] = x;
        }
    
        fp.close();
    } else {
        cout << "Can't open." << endl;
        exit(0);
    }
}

void randomGen10k(int array[]){
    int x;
    int n = 10000;
    ofstream fp("10k_randomfile.txt");

     if(fp.is_open()){
        for(int i = 0; i < n; i++){
            x = rand() % 106;
            fp << x << endl;
            array[i] = x;
        }
    
        fp.close();
    } else {
        cout << "Can't open." << endl;
        exit(0);
    }
}

void randomGen100k(int array[]){
    int x;
    int n = 100000;
    ofstream fp("100k_randomfile.txt");

     if(fp.is_open()){
        for(int i = 0; i < n; i++){
            x = rand() % 106;
            fp << x << endl;
            array[i] = x;
        }
    
        fp.close();
    } else {
        cout << "Can't open." << endl;
        exit(0);
    }
}

void presetGen1k(int array[]){
    int n = 1000;
    ifstream fp("1k_presetfile.txt");

    if(fp.is_open()){
        for(int i = 0; i < n; i++){
            fp >> array[i];
        }

        fp.close();
    } else {
        cout << "Can't open." << endl;
        exit(0);
    }
}

void presetGen10k(int array[]){
    int n = 10000;
    ifstream fp("10k_presetfile.txt");

    if(fp.is_open()){
        for(int i = 0; i < n; i++){
            fp >> array[i];
        }

        fp.close();
    } else {
        cout << "Can't open." << endl;
        exit(0);
    }
}\

void presetGen100k(int array[]){
int n = 100000;
    ifstream fp("100k_presetfile.txt");

    if(fp.is_open()){
        for(int i = 0; i < n; i++){
            fp >> array[i];
        }

        fp.close();
    } else {
        cout << "Can't open." << endl;
        exit(0);
    }
}