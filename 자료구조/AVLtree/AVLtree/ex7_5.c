#include <stdio.h>
#include "avl.h"

int main(void) {
	treeNode* root_AVL = NULL;
	treeNode* root_BST = NULL;

	root_AVL = insertAVLNode(&root_AVL, 50);
	insertAVLNode(&root_AVL, 60);
	insertAVLNode(&root_AVL, 70);
	insertAVLNode(&root_AVL, 90);
	insertAVLNode(&root_AVL, 80);
	insertAVLNode(&root_AVL, 75);
	insertAVLNode(&root_AVL, 73);
	insertAVLNode(&root_AVL, 72);
	insertAVLNode(&root_AVL, 78);
	printf("\n========AVL Ʈ�� ���===========\n\n");
	displayInorder(root_AVL);
	printf("\n\n AVL Ʈ������ 70 Ž�� : ");
	searchBST(root_AVL, 70);
	printf("\n\n AVL Ʈ������ 72 Ž�� : ");
	searchBST(root_AVL,72);
	printf("\n\n AVL Ʈ������ 76 Ž�� : ");
	searchBST(root_AVL,76);

}