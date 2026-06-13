//max heap
// #include <iostream>
// #include <vector>
// using namespace std;

// class MaxHeap
// {
//     vector<int> heap;

//     int parent(int i) { return (i - 1) / 2; }
//     int leftChild(int i) { return 2 * i + 1; }
//     int rightChild(int i) { return 2 * i + 2; }

//     void heapifyDown(int i)
//     {
//         int largest = i;
//         int left = leftChild(i);
//         int right = rightChild(i);

//         if (left < heap.size() && heap[left] > heap[largest])
//             largest = left;
//         if (right < heap.size() && heap[right] > heap[largest])
//             largest = right;

//         if (largest != i)
//         {
//             swap(heap[i], heap[largest]);
//             heapifyDown(largest);
//         }
//     }

//     void heapifyUp(int i)
//     {
//         while (i > 0 && heap[parent(i)] < heap[i])
//         {
//             swap(heap[i], heap[parent(i)]);
//             i = parent(i);
//         }
//     }

// public:
//     void insert(int val)
//     {
//         heap.push_back(val);
//         heapifyUp(heap.size() - 1);
//     }

//     int extractMax()
//     {
//         if (heap.empty())
//         {
//             cout << "Heap is empty\n";
//             return -1;
//         }

//         int maxVal = heap[0];
//         heap[0] = heap.back();
//         heap.pop_back();

//         heapifyDown(0);

//         return maxVal;
//     }

//     void printHeap()
//     {
//         for (int val : heap)
//             cout << val << " ";
//         cout << endl;
//     }
// };

// int main()
// {
//     MaxHeap h;

//     h.insert(10);
//     h.insert(20);
//     h.insert(5);
//     h.insert(30);
//     h.insert(25);

//     cout << "Heap elements: ";
//     h.printHeap();

//     cout << "Max: " << h.extractMax() << endl;

//     cout << "Heap after extractMax: ";
//     h.printHeap();

//     return 0;
// }

// convertbst to max heap
// #include <iostream> 
// #include <vector>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val) {
//         this->val = val;  
//         left = nullptr;
//         right = nullptr;
//     }
// }
// void inorder(Node* root, vector<int>& arr){
//     if(root==Null) return;
//     inorder(root->left, arr);
//     arr.push_back(root->val);
//     inorder(root->right,arr);
// }
// class Node{
//     public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val) {}
//         this->val = val;  
//     }
//     int main() {
//         Node* a = new Node(10);
//         Node* b = new Node(5);
//         Node* c = new Node(16);
//         Node* d = new Node(1);
//         Node* e = new Node(8);
//         Node* f = new Node(12);
//         Node* g = new Node(20);
//         a->left = b;a->right = c;
//         b->left = d;b->right = e;
//         c->left = f;c->right = g;
//         vector<int> dec;
//         inorder(a, dec);
//     }

// void inorder(Node* root, vector<int>& arr) {
//     if (root == nullptr) return;
//     inorder(root->left, arr);
//     arr.push_back(root->val);
//     inorder(root->right, arr);
// }
// int inorder(Node* root, vector<int>& arr) {
//     if (root == nullptr) return;
//     inorder(root->left, arr);
//     arr.push_back(root->val);
//     inorder(root->right, arr);
// }

//check if given binary tree is  maxheap or not
// bool is CBT(Node*root){
//     bool isMax(Node*root);
// }