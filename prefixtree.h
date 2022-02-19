//
// Created by Prokhar Kulak on 19.02.22.
//

#ifndef TIITLAB1_PREFIXTREE_H
#define TIITLAB1_PREFIXTREE_H
#include <string>
#define  alphabet 26

struct node
{
    node* children[alphabet];
    bool is_word;
};

void init(node* root) ;

void insert(node* root, std::string key) ;

bool search(node* root, std::string key) ;

bool isEmpty(node* root) ;



#endif //TIITLAB1_PREFIXTREE_H
