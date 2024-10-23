//Revathi oc
//23070123105
#include <iostream>
using namespace std;
class Link {
public:
    int data;
    Link* next;
    
    Link(int num) {
        data = num;
        next = NULL;
    }
};

int main() {
    cout<<"2. Nodes"<<endl<<endl;
    Link* l1 = new Link(6);
    cout << "Data: " << l1->data << "   Next: " << l1->next << endl;
}
