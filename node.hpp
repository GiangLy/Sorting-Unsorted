#ifndef __NODE__
#define __NODE__
class Node 
{
    int key;
    double number;
    Node* left;
    Node* right;
public:
    Node();
    void set_left(Node* aleft);
    void set_right(Node* aright);
    void set_phone(long long phne);
    void set_name(string nme);
    long long get_phone();
    string get_name();
    Node* get_left();
    Node* get_right();
};
#endif
