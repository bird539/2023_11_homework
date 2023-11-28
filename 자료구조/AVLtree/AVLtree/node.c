#include <stdio.h>
#include "node.h"

//이진탐색트리를 중위 순회하면서 출력하는 연산
void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("%d_", root->key); //element형에 맞게 출력 형식 지정
		displayInorder(root->right);
	}
}