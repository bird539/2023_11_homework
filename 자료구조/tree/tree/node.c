#include <stdio.h>
#include "node.h"

//이진탐색트리를 중위 순회하면서 출력하는 연산
void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("%C_", root->key);
		displayInorder(root->right);
	}
}