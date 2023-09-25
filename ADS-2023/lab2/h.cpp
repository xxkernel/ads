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

//     Node* temp = head;
//     while (p!=1){
//         temp = temp -> next;
//         p--;
//     }
//     node->next = temp->next;
//     temp->next = node;
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
//         Node *temp=head;
//         for(int i =0; i<p-1;i++){
//             temp=temp->next;
//         }
//         temp->next=temp->next->next;
//         }
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
//     if(x != 0){ 
//         Node* cur = head; 
//         while(cur->next){ 
//             cur = cur->next; 
//         } 
//         Node* tail = cur; 
//         cur = head; 
//         for(int i = 0; i < x-1; i++){ 
//             cur = cur->next; 
//         } 
//         tail->next = head; 
//         head = cur->next; 
//         cur->next = NULL; 
//     } 
//     return head; 
// }
 
// Node* cyclic_right(Node* head, int x){
//     if(x != 0){ 
//         int size = 0;
//         while(head){
//             size++;
//             head = head->next;
//         }
//         if(x>size){
//             x = x%size;
//         }
//         head = cyclic_left(head, size-x); 
//     } 
//     return head; 
// }
 
// int main(){
//     Node* head = nullptr;
//     while (true)
//     {
//         int command; cin >> command;
//         if (command == 0){
//             break;
//         }else if(command == 1){
//             int x, p; cin >> x >> p;
//             head = insert(head, new Node(x), p);
//         }else if (command == 2){
//             int p; cin >> p;
//             head = remove(head, p);
//         }else if (command == 3){
//             print(head);
//         }else if (command == 4){
//             int p1, p2; cin >> p1 >> p2;
//             head = replace(head, p1, p2);
//         }else if (command == 5){
//             head = reverse(head);
//         }else if (command == 6){
//             int x; cin >> x;
//             head = cyclic_left(head, x);
//         }else if (command == 7){
//             int x; cin >> x;
//             head = cyclic_right(head, x);
//         }   
//     }
//     return 0;
// }








#include <iostream>
 
using namespace std;
 
struct Node{
    int val;
    Node* next;
    Node(): val(0), next(nullptr) {}
    Node(int x): val(x), next(nullptr) {}
    Node(Node* next): val(0), next(next) {}
    Node(int x, Node* next): val(x), next(next) {}
};
 
Node* insert(Node* head, Node* node, int p){
    if(p==0){
        node->next = head;
        head = node;
        return node;
    }
    Node* temp = head;
    while(p!=1){
        temp = temp->next;
        p--;
    }
    node->next = temp->next;
    temp->next = node;
    // Node* temp = head->next;
    // head->next = node;
    // head = head->next;
    // head->next = temp;
    return head;
}
 
Node* remove(Node* head, int p){
    if(p==0){
        Node *node = head->next;
        return node;
    }
    Node* temp = head;
    while(p!=1){
        temp = temp->next;
        p--;
    }
    temp->next= temp->next->next;
    return head;
}
 
Node* replace(Node* head, int p1, int p2){
    Node *cur=head;
    for(int i =0; i<p1;i++){
        cur=cur->next;
    }
    Node* temp = new Node(cur->val); 
    head = remove(head, p1); 
    head = insert(head, temp, p2); 
     
    return head; 
}
 
Node* reverse(Node* head){
    Node* start = head;
    Node* temp = NULL;
    Node* end = NULL;
    while(start){
        temp = start->next;
        start->next = end;
        end = start;
        start = temp;
    }
    return end;
}
 
void print(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
 
Node* cyclic_left(Node* head, int x){
    if(x==0){
        return head;
    }
    Node* temp = head;
    Node* res = new Node();
    Node* ans = res;
    Node* res_1 = new Node();
    Node* ans_1 = res_1;
    while(x!=0){
        Node* newOne = new Node(temp->val);
        res_1->next = newOne;
        res_1 = res_1->next;
        temp = temp->next;
        x--;
    }
    while(temp){
        Node* newOne = new Node(temp->val);
        res->next = newOne;
        res = res->next;
        temp = temp->next;
    }
    res->next = ans_1->next;
    return ans->next;
}
 
Node* cyclic_right(Node* head, int x){
    int size = 0;
    Node* check = head;
    while(check){
        size++;
        check = check->next;
    }
    head=cyclic_left(head,size-x);
    return head;
}
 
int main(){
    Node* head = nullptr;
    while (true)
    {
        int command; cin >> command;
        if (command == 0){
            break;
        }else if(command == 1){
            int x, p; cin >> x >> p;
            head = insert(head, new Node(x), p);
        }else if (command == 2){
            int p; cin >> p;
            head = remove(head, p);
        }else if (command == 3){
            print(head);
        }else if (command == 4){
            int p1, p2; cin >> p1 >> p2;
            head = replace(head, p1, p2);
        }else if (command == 5){
            head = reverse(head);
        }else if (command == 6){
            int x; cin >> x;
            head = cyclic_left(head, x);
        }else if (command == 7){
            int x; cin >> x;
            head = cyclic_right(head, x);
        }   
    }
    return 0;
}








