using namespace std;
#include<iostream>
#include"Tree.h"

int main()
{
	BSTree<int> BST;
	BST.Insert(1);
	BST.Insert(2);
	BST.Insert(4);
	BST.Insert(3);

	BST.Inorder();

	BST.Erase(3);
	BST.Inorder();


	return 0;
}