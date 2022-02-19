#include "prefixtree.h"



void init(node* root) {
    root->is_word = false;
    for (int i = 0; i < alphabet; i++)
    {
        root->children[i] = nullptr;
    }
}

void insert(node* root, std::string key) {
    node* current = root;
    for (int  i = 0; i < key.length(); i++)
    {
        int letter = (int)key[i] - (int)'a';
        if (current->children[letter] == nullptr)
            current->children[letter] = new node();
        current = current->children[letter];
    }
    current->is_word = true;
}

bool search(node* root, std::string key) {
    node* current = root;
    for (int i = 0; i < key.length(); i++)
    {
        if (current->children[((int)key[i] - (int)'a')] == nullptr)
            return false;
        current = current->children[((int)key[i] - (int)'a')];
    }
    return current->is_word;
}

bool isEmpty(node* root) {
    for (int i = 0; i < alphabet; i++)
    {
        if (root->children[i])
            return false;
    }
    return true;
}

