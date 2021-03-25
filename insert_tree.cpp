#include<iostream>
using namespace std;

void inserttree{

    int size;
    int* array;
    void insertElement(int x);
    void searchElement(int x);
    void parent(int x);
    int extendSize(int x);
    void BinarySearchTree (int size)
     {
        this -> size = extendSize(size);
        cout << this -> size << endl;
        this -> array = new int[this -> size];
        for(int x = 0; x < this -> size; x++){
            array[x] = NULL;
        }
    }
};

int BinarySearchTree::extendSize(int x) {
    int value = 0;
    for(int y = 0; y < x + 1; y++) {
        value = (2 * value) + 2;
    }
    return value;
}

void BinarySearchTree::insertElement(int x) {
    int currentIndex = 0;
    cout << "Adding: " << x;
    while(true) {
        if(array[currentIndex] == NULL){
            array[currentIndex] = x;
            cout << " Inserted at index: " << currentIndex << endl;
            break;
        }else if(array[currentIndex] <= x) {
            if(array[currentIndex] == x){
                cout << "ERROR!-- Repeating element" << endl;
                break;
            }else
            cout << " Right ";
            currentIndex = (2 * currentIndex + 2);
        }else if(array[currentIndex] >= x) {
             if(array[currentIndex] == x){
                cout << "ERROR!-- Repeating element" << endl;
                break;
            }else
            cout << " Left ";
            currentIndex = (2 * currentIndex + 1);
        }
    }
}
void BinarySearchTree::searchElement(int x){
    int currentIndex = 0;
    while (true) {
            if (array[currentIndex] == NULL) {
            cout << "Not Found" << endl;
            break;
            }
            if (array[currentIndex] == x) {
            cout << "Found at index: " << currentIndex << endl;
            break;
            }
            else if(array[currentIndex] < x) {
            currentIndex = (2 * currentIndex + 2);
        }
            else if(array[currentIndex] > x) {
            currentIndex = (2 * currentIndex + 1);
        }
    }
}
void BinarySearchTree::parent(int x){
    while (x != 0) {
        x = (x-1) / 2;
        cout << "---";
    }
}

int main () {
    BinarySearchTree bst(5);
    bst.insertElement;
    cin>>" ">>bst.insertElement();
    bst.insertElement(6);
    bst.insertElement(9);
    bst.insertElement(3);
    bst.insertElement(2);
    bst.searchElement(1);
};
