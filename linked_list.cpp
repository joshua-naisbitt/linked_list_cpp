// Linked List                                                                   
class LinkedList {                                                               
                                                                                 
    struct Node {                                                                
        // Node Member variables                                                 
        int data;       // content of node                                       
        Node* next;     // pointer to next node                                  
                                                                                 
        // Node Constructor                                                      
        Node() : data(0), next(nullptr){}                                        
        Node(int val) : data(val), next(nullptr){}                               
    }                                                                                 
public:                                                                          
    // LinkedList Constructor                                                    
    LinkedList() {                                                               
        head = nullptr;                                                          
    }                                                                            
                                                                                 
    // LinkedList Methods                                                        
                                                                                 
    // Remove value from end of linked list, returns removed value               
    int PopValue(){                                                              
        Node* node = head;                                                       
        int rtrnVal = node->data;                                                
        head = head->next;                                                       
        delete node;                                                             
        return rtrnVal;                                                          
                                                                                 
    }                                                                            
                                                                                 
    // Prepend value to start of linked list                                     
    void AddValue(int val){                                                      
        Node* node = new Node(val);                                              
        node->data = val;                                                        
        node->next = head;                                                       
        head = node;                                                             
    }                                                                            
                                                                                 
    void printLinkedList(){                                                      
       Node* node = head;                                                        
       while (node->next != nullptr){                                            
           cout << node->data << "->";                                           
           node = node->next;                                                    
       }                                                                         
       cout << node->data << endl;                                               
    }                                                                            
                                                                                 
private:                                                                         
    // LinkedList member variables                                               
    Node* head;                                                                  
};             
