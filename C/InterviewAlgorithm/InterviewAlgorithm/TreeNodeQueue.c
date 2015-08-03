#include "TreeNodeQueue.h"

#define QUEUE_SIZE 1024	// BUG!, the size of queue should be increased when it need
static struct TreeNode *_queue[QUEUE_SIZE];
static int _head = 0, _tail = 0;

void enqueue(struct TreeNode *node) {
	if (node == 0) return;
	_queue[_tail % QUEUE_SIZE] = node;
	_tail++;
}

struct TreeNode *dequeue() {
	struct TreeNode *node;
	if (_head == _tail) return 0;
	node = _queue[_head % QUEUE_SIZE];
	_head++;

	return node;
}

struct TreeNode *peek() {
	struct TreeNode *node;

	if (_head == _tail) return 0;
	return _queue[_head % QUEUE_SIZE];
}
