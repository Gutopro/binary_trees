<h1># 0x1D.  C - Binary trees</h1>
<h2>General </h2><br/>
you'll learn:<br/>
What is a binary tree<br/>
What is the difference between a binary tree and a Binary Search Tree<br/>
What is the possible gain in terms of time complexity compared to linked lists<br/>
What are the depth, the height, the size of a binary tree<br/>
What are the different traversal methods to go through a binary tree<br/>
What is a complete, a full, a perfect, a balanced binary tree<br/>

<p>Requirements</p><br/>
<b> General </b><br/>

The prototypes of all your functions should be included in your header file called binary_trees.h<br/>
Don’t forget to push your header file<br/>
All your header files should be include guarded<br/>

GitHub<br/>
There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.<br/>

<h4>More Info</h4>
Data structures<br/>
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.<br/>

<p>Basic Binary Tree</p>
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */<br/>
struct binary_tree_s<br/>
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};<br/>

typedef struct binary_tree_s binary_tree_t;<br/>
<h4>Binary Search Tree</h4>
typedef struct binary_tree_s bst_t;<br/>
AVL Tree<br/>
typedef struct binary_tree_s avl_t;<br/>
Max Binary Heap<br/>
typedef struct binary_tree_s heap_t;<br/>
Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. <br/>They are not BSTs, thus they don’t follow any kind of rule.<br/>

<p>Print function</p><br/>
To match the examples in the tasks, you are given this function<br/>
<p></p>
This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction<br/>
