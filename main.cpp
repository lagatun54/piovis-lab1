#include<iostream>
#include "prefixtree.h"
#define  alphabet 26
using namespace std;



int main() {

    node* root = new node ;
    init(root);

    insert(root, "taxi");
    insert(root, "tea");
    insert(root, "monkey");
    insert(root, "hero");
    insert(root, "heart");

    cout << search(root, "taxi") << endl;
    cout << search(root, "toy") << endl;


    cout << search(root, "hero") << endl;
    cout << search(root, "hero") << endl;
    cout << search(root, "taxi") << endl;


    return 0;
}