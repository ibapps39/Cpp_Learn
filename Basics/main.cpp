#include <iostream>
#include <string>
#include <vector>
#include <memory>


class ians_smart_ptr {
    private:
        void* ptr_;
    public:
        ians_smart_ptr(void* ptr) : ptr_(ptr) {}
        ~ians_smart_ptr() {delete ptr_;}
        void* get() {return ptr_;}
};

//Using copilot
class customSmartPointer {
public:
    customSmartPointer(int* ptr) : ptr_(ptr) {}
    ~customSmartPointer() { delete ptr_; }
    int* get() { return ptr_; }
private:
    int* ptr_;
};

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    
    auto arry = new int[10];
    delete[] arry;
    
    int int_array[10];
    int *int_pointer = new int[10];
    delete[] int_pointer;
    int *int_array_pointer = int_array;
    delete int_array_pointer;
    
    string str_array = "hello";
    string *str_pointer = &str_array;
    delete str_pointer;
    string *str_array_pointer = new string[10];
    delete[] str_array_pointer;
    string *str_array_pointer_2 = new string("hi");
    delete str_array_pointer_2;

    //tired of tracking memory leaks
    //use smart pointers
    /*smart pointers are a pointer that automatically 
    * deletes the object it points to when it goes out of scope
    * or when the pointer is reassigned to a new object
    */
    //smart pointer to an int
    unique_ptr<int> int_ptr(new int(10));
    //smart pointer to a string
    unique_ptr<string> str_ptr(new string("hello"));
    //example of make_unique
    //We use make_unique to create a unique_ptr to an object of type T
    unique_ptr<int> int_ptr_2 = make_unique<int>(10);
    //example of make_shared
    //We use make_shared to create a shared_ptr to an object of type T
    shared_ptr<int> int_ptr_3 = make_shared<int>(10);
    //example of make_shared with initializer list
    shared_ptr<int> int_ptr_4 = make_shared<int>(10, 20);
    //example of move
    //We use move to move an object from one shared_ptr to another
    shared_ptr<int> int_ptr_5 = make_shared<int>(10);
    shared_ptr<int> int_ptr_6 = int_ptr_5;
    int_ptr_5 = move(int_ptr_6);

    return 0;
}