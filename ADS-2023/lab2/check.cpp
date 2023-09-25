// #include <iostream>
 
// using namespace std;
 
// struct Node{
//     int val;
//     Node* next;
//     Node(): val(0), next(nullptr) {}
//     Node(int x): val(x), next(nullptr) {}
//     Node(Node* next): val(0), next(next) {}
//     Node(int x, Node* next): val(x), next(next) {}
// };
 
// Node* insert(Node* head, Node* node, int p){
//     if (p==0){
//         node -> next = head;
//         head = node;
//         return head;
//     }

//     Node* curr = head;
//     while (p!=1){
//         curr = curr -> next;
//         p--;
//     }
//     node -> next = curr -> next;
//     curr -> next = node;
//     return head;
// }
 
// Node* remove(Node* head, int p){
//     if(!head){
//         return head;
//     }
//     if(p==0){
//         head = head->next;
//     }
//     else{
//         Node* temp = head;
//         int i = 0;
//         while(temp){
//             if(i==p-1){
//                 temp->next = temp->next->next;
//                 break;
//             }
//             temp = temp->next;
//             i++;
//         }
//     }
//     return head;
// }
 
// Node* replace(Node* head, int p1, int p2){
//     // Node* temp = head;
//     // int cnt = 0;
//     // while (temp != NULL){
//     //     if (cnt == p1){
//     //         Node* newNode = new Node(temp -> val);
//     //         insert(head, newNode, p1);
//     //         remove(temp, p1 + 1);
//     //     }
//     //     if (cnt == p2){
//     //         Node* newNode = new Node(temp -> val);
//     //         insert(head, newNode, p2);
//     //         remove(temp, p2 + 1);
//     //     }
//     //     temp = temp -> next;
//     //     cnt++;
//     // }
//     // return head;

//     Node *cur=head;
//     for(int i =0; i<p1;i++){
//         cur=cur->next;
//     }
//     Node* temp = new Node(cur->val); 
//     head = remove(head, p1); 
//     head = insert(head, temp, p2); 
     
//     return head; 
// }
 
// Node* reverse(Node* head){
//     Node* start = head;
//     Node* temp = NULL;
//     Node* end = NULL;
//     while(start){
//         temp = start->next;
//         start->next = end;
//         end = start;
//         start = temp;
//     }
//     return end;
// }
 
// void print(Node* head){
//     Node* temp = head;
//     while(temp){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
 
// Node* cyclic_left(Node* head, int x){
//     if(x==0){
//         return head;
//     }
//     Node* temp = head;
//     Node* res = new Node();
//     Node* ans = res;
//     Node* res_1 = new Node();
//     Node* ans_1 = res_1;
//     while(x!=0){
//         Node* newOne = new Node(temp->val);
//         res_1->next = newOne;
//         res_1 = res_1->next;
//         temp = temp->next;
//         x--;
//     }
//     while(temp){
//         Node* newOne = new Node(temp->val);
//         res->next = newOne;
//         res = res->next;
//         temp = temp->next;
//     }
//     res->next = ans_1->next;
//     return ans->next;
// }
 
// Node* cyclic_right(Node* head, int x){
//     int size = 0;
//     Node* check = head;
//     while(check){
//         size++;
//         check = check->next;
//     }
//     head=cyclic_left(head,size-x);
//     return head;
// }
 
// Node* insertNode(Node* head, int x){
//     if(head==NULL){
//         return new Node(x);
//     }
//     else{
//         head->next = insertNode(head->next, x);
//     }
//     return head;
// }
// int main(){
//     int n;cin>>n;
//     Node* head = NULL;
//     for(int i = 0;i<n;i++){
//         int num;cin>>num;
//         head = insertNode(head,num);
//     }
//     head = cyclic_right(head, 2);
//     print(head);
// }

