#include <stdio.h>
#include "node.h"

//����Ž��Ʈ���� ���� ��ȸ�ϸ鼭 ����ϴ� ����
void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("%C_", root->key);
		displayInorder(root->right);
	}
}