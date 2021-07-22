#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree){
    int level = 0;
    return(level_of_node(tree, level));

}