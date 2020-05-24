# include "search_tree.h"

/*
* Search Trees can follow two models (1) Model A (Leaf Trees): Compare key with left key, if smaller, 
* then choose left, else choose right. (2) Model B (Node Trees): Compare key with current node for 
* equality as well, else choose right. Clearly B requires twice the number of comparisons in A. 
* Thus model A is preffered. Also, in these trees, all the keys are forming the interior nodes
* while objects are at the leaf nodes, thus N = O(2^h), where N is number of objects and h is height of tree.
* If Key is the Object, then Model B is preffered as normally in the textbooks, since key is the object,
* they are called node trees. All DB implementation follows Model A. 
*/