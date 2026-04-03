#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left, *right;
	node(int d) {
		data = d;
		left = right = NULL;
	}
};

node* createTree() {
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}

	node* root = new node(data);
	root->left = createTree();
	root->right = createTree();

	return root;
}

void preOrder(node* root) {
	if (root == NULL) {
		return ;
	}

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(node* root) {
	if (root == NULL) {
		return ;
	}

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(node* root) {
	if (root == NULL) {
		return ;
	}

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int countNodes(node * root){
    if(root==NULL){
        return 0;
    }
    int LSTCount=countNodes(root->left);
    int RSTCount=countNodes(root->right);

    return 1+LSTCount+RSTCount;
}

int height(node *root){  //o(n)
    if(root==NULL){
        return 0;
    }
    int LSTheight=height(root->left);
    int RSTheight=height(root->right);
    return max(LSTheight,RSTheight)+1;
}

int diameter(node*root){  //o(n^2)
    if(root==NULL){
        return 0;
    }
    int op1=height(root->left)+height(root->right);
    int op2=diameter(root->left);
    int op3=diameter(root->right);

    return max(op1,max(op2,op3));
}

// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main() {

	node* root = createTree();

    cout <<"preOrder(root) "<< endl;
	preOrder(root);
	
    cout <<"inOrder(root) "<< endl;
	inOrder(root);
	
    cout <<"postOrder(root) "<< endl;
	postOrder(root);
	

    cout<<"total no of nodes "<<countNodes(root)<<endl;

    cout<<"total height "<<height(root)<<endl;

    cout<<"diameter of tree "<<diameter(root)<<endl;

	return 0;
}