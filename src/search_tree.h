#include <stdio.h>
#include <stdbool.h>

/*
* Type definition of leaf search tree.
*/
struct typedef tr_l_t
{
    key_t key;
    /* data */
    struct tr_l_t *left;
    struct tr_l_t *right;
} tree_leaf_t;


/*
* Type definition of node search tree
*/

struct typedef tr_n_t
{
    key_t key;
    /* data */
    struct tr_n_t *left;
    struct tr_n_t *right;

    void *data;
} tree_node_t;


bool is_leaf(tree_leaf_t);
// This is not allowed, to override the methods. 
// bool is_leaf(tree_node_t);