// 约瑟夫问题
#include<iostream>
using namespace std;
struct Node
{
	int num;
	Node * ahead;
	Node * next;
};
Node *Create(int N);
Node *Search(Node *head, int p);
Node *Release(Node *head, int M);
int main(){
	int N, P, M = 0; // N-起始节点数，P-开始节点
	cin >> N >> P >> M; // 每次释放第M个节点
	Node * head = Create(N); // 创建N个节点
	head = Search(head, P); // 找到第P个节点
	while (head->next != head) // 不断释放第M个节点
	{ // 直到只剩一个节点 
		head = Release(head, M); // 释放第M个节点
	}
	cout << head->num;
	return 0;
} 
