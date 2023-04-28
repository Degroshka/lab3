
#include <iostream>
using namespace std;
struct tree {
	char elem;
	tree* left, * right;
};
int main()
{
	setlocale(LC_ALL, "Russian");
	tree* c,*st;
	char sy;
	c = new tree;
	cout << "Введите корневое число-";
	cin>>sy;
	c->elem = sy;
	while (isdigit(sy)) {
		cout << "Введите число- ";
		cin >> sy;
		c->right = new tree;
		c->right = c;
		c->left = new tree;
		c->left = c;
		if (sy > c->elem and sy>c->right->elem) {
			c = c->right;
		}
		else if (sy < c->elem and sy < c->left->elem) {
			c = c->left;
		}
		if (isdigit(sy) and sy > c->elem) {	
			c->right->elem = sy;
		}
		if (isdigit(sy) and sy < c->elem) {
			c->left->elem = sy;
		}
		cout << "current " << c->elem << endl << "left " << c->left->elem << endl << "right " << c->right->elem<<endl;
	}
	
}
