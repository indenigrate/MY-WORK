#include <iostream>
using namespace std;

// class for Node
class List_node
{
public:
    int data;
    List_node *next; // should be made pvt
    List_node()
    {
        data = 0;
        next = nullptr;
    }
    List_node(const int &data) : data(data), next(nullptr) {}
};

// class for Linked List
class Singly_linked_list
{
    List_node *head;

public:
    Singly_linked_list() { head = nullptr; }
    void assign_head(List_node *head)
    {
        this->head = head;
    }
    List_node *return_head()
    {
        // static List_node *head;
        return head;
    }
    void Print_list();
    int List_length();
    void Insert_node_at_start(int value);
    void Insert_node_at_end(int value);
    void Insert_node_at_pos(int value, int pos);
    void delete_first();
    void delete_last();
    void delete_pos(int pos);
    int search_list(int key);
    void insert_sorted(int val);
    void remove_key(int key);
    List_node *reverse_recursive(List_node *heads, List_node *head);
    int detect_loop();
};

// Method to print the singly linked list
void Singly_linked_list::Print_list()
{
    List_node *point = head;
    if (point == nullptr)
    {
        printf("List empty\n");
        return;
    }
    while (point != nullptr)
    {
        cout << point->data << " ";
        point = point->next;
    }
    cout << endl;
}

// method to return the length of the list
int Singly_linked_list::List_length()
{
    int count = 0;
    List_node *point = head;

    while (point != nullptr)
    {
        count++;
        point = point->next;
    }
    return count;
}

void Singly_linked_list::Insert_node_at_start(int value)
{
    List_node *new_node = new List_node(value);
    new_node->next = head;
    head = new_node;
    return;
}

void Singly_linked_list::Insert_node_at_end(int value)
{
    List_node *ptr = head;
    while (ptr->next != nullptr)
    {
        ptr = ptr->next;
    }
    List_node *new_node = new List_node(value);
    ptr->next = new_node;
    new_node->next = nullptr;
}

void Singly_linked_list::Insert_node_at_pos(int value, int pos)
{
    if (pos == 1)
    {
        Insert_node_at_start(value);
        return;
    }
    List_node *ptr = head;
    while (ptr != nullptr && pos > 2)
    {
        pos--;
        ptr = ptr->next;
    }
    List_node *new_node = new List_node(value);
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void Singly_linked_list::delete_first()
{
    if (head == nullptr)
    {
        cout << "List empty\n";
        return;
    }

    List_node *temp = head;
    head = head->next;
    delete temp;
}

void Singly_linked_list::delete_last()
{
    if (head == nullptr)
    {
        cout << "List empty\n";
        return;
    }

    List_node *temp = head, *temp2;
    while (temp->next != nullptr)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = nullptr;
    delete temp;
}

void Singly_linked_list::delete_pos(int pos)
{
    if (head == nullptr)
    {
        cout << "List empty\n";
        return;
    }

    List_node *temp = head, *temp2;
    while (temp->next != nullptr && pos > 1)
    {
        pos--;
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = temp->next;
    delete temp;
}

int Singly_linked_list::search_list(int key)
{
    List_node *ptr = head;
    int index = 1;
    while (ptr != nullptr)
    {
        if (ptr->data == key)
        {
            return index;
        }
        index++;
        ptr = ptr->next;
    }
    return -1;
}

List_node *Singly_linked_list::reverse_recursive(List_node *heads, List_node *head)
{
    List_node *ptr = heads;
    if (ptr->next == nullptr)
    {
        cout << "Inside if block  " << ptr->data << endl;
        this->head = ptr;
        return ptr;
    }

    List_node *temp = reverse_recursive(ptr->next, head);
    temp->next = ptr;
    cout << temp->data << " Points to " << ptr->data << endl;
    ptr->next = nullptr;
    return ptr;
}

void Singly_linked_list::insert_sorted(int val)
{
    List_node *new_node = new List_node(val);
    List_node *current = head,*temp=head;
    if(new_node->data<head->data){
        new_node->next=head;
        head=new_node;
        return;
    }
    while (current != nullptr && current->data < new_node->data){
        temp=current;
        current=current->next;
    }
    temp->next=new_node;
    new_node->next=current;
    return;
}

void Singly_linked_list::remove_key(int key){
    List_node *ptr=head,*temp=nullptr;
    while(ptr!=nullptr&&ptr->data!=key){
        temp=ptr;
        ptr=ptr->next;
    }
    if(ptr==nullptr)return;
    if(temp==nullptr){head=ptr->next;return;}
    cout<<"test\n";
    temp->next=ptr->next;
    return;

}

int Singly_linked_list::detect_loop(){
    List_node *slow_ptr=head,*fast_ptr=head;
    while(fast_ptr!=nullptr&&fast_ptr->next!=nullptr){
        fast_ptr=fast_ptr->next->next;
        slow_ptr=slow_ptr->next;

        if(slow_ptr==fast_ptr){
            fast_ptr=head;
            while(fast_ptr!=slow_ptr){
            fast_ptr=fast_ptr->next;
            slow_ptr=slow_ptr->next;
            }
            return fast_ptr->data;
        }
    }
    
    return 0;
}
// main function
int main()
{
    Singly_linked_list SLL;
    List_node first(5);
    List_node second(19);
    List_node third(7);
    SLL.assign_head(&first);
    first.next = &second;
    second.next = &third;

    SLL.Print_list();
    cout << "The length is " << SLL.List_length() << endl;

    SLL.Insert_node_at_start(4);
    SLL.Insert_node_at_start(3);
    SLL.Insert_node_at_start(2);
    SLL.Insert_node_at_start(1);
    SLL.Print_list();
    cout << "The length is " << SLL.List_length() << endl;

    SLL.Insert_node_at_end(4);
    SLL.Insert_node_at_end(3);
    SLL.Insert_node_at_end(2);
    SLL.Insert_node_at_end(1);
    SLL.Print_list();
    cout << "The length is " << SLL.List_length() << endl;

    SLL.Insert_node_at_pos(99, 12);
    SLL.Print_list();
    cout << "The length is " << SLL.List_length() << endl;

    SLL.delete_first();
    SLL.delete_last();
    SLL.delete_pos(3);
    SLL.Print_list();
    cout << "The length is " << SLL.List_length() << endl;

    // cout<<"Found 19 at "<<SLL.search_list(19)<<endl;
    // cout<<"Found 2 at "<<SLL.search_list(2)<<endl;
    // cout<<"Found 1 at "<<SLL.search_list(1)<<endl;
    cout << "Found 119 at " << SLL.search_list(119) << endl;

    SLL.reverse_recursive(SLL.return_head(), SLL.return_head());
    cout << (SLL.return_head())->data << endl;
    SLL.Print_list();
    cout << "The length is " << SLL.List_length() << endl;

    Singly_linked_list sorted;

    sorted.Insert_node_at_pos(3, 1);
    sorted.Insert_node_at_pos(3, 2);
    sorted.Insert_node_at_pos(3, 3);
    sorted.Insert_node_at_pos(4, 4);
    sorted.Insert_node_at_pos(5, 5);
    sorted.Insert_node_at_pos(5, 6);
    sorted.Insert_node_at_pos(5, 7);
    sorted.Insert_node_at_pos(6, 8);
    sorted.Print_list();
    sorted.insert_sorted(1);
    sorted.insert_sorted(2);
    sorted.insert_sorted(5);
    sorted.insert_sorted(3);
    sorted.insert_sorted(3);
    sorted.Print_list();
    sorted.remove_key(6);
    sorted.remove_key(1);
    sorted.remove_key(4);
    sorted.Print_list();

    cout<<"Loop present now\n";

    Singly_linked_list looped;
    looped.Insert_node_at_start(5);
    looped.Insert_node_at_start(7);
    looped.Insert_node_at_start(4);
    looped.Insert_node_at_start(9);
    looped.Insert_node_at_start(11);
    looped.Insert_node_at_start(3);

    looped.Print_list();
    //cout<<looped.detect_loop()<<endl;
    List_node *ptr=looped.return_head(),*temp;
    while(ptr->next!=nullptr){
        if(ptr->data==4){
            temp=ptr;
        }
        ptr=ptr->next;
    }
    ptr->next=temp;

    cout<<looped.detect_loop()<<endl;
    
    return 0;
}