#include <iostream>
#include <utility> // needed for std::move()

template <typename T>
class SharedPtr final {
public:
  // Default constructor
  SharedPtr() { 
    // TODO: Implement this!    
  }

  // Create a shared pointer from a raw pointer.
  explicit SharedPtr(T* ptr) : ptr(ptr) {
    // TODO: Implement this!
    // this->ptr = ptr; 
    cnt = new int();
    *cnt = 1;
  }

  // Copy from another shared pointer into this one.
  SharedPtr(const SharedPtr<T> &other) {
    // TODO: Implement this!
    this->ptr = other.ptr; 
    this->cnt = other.cnt;
    // *cnt++; 
    *cnt = *cnt + 1; 
  }

  // Destructor should clean up any allocated memory.
  ~SharedPtr() {
    // TODO: Implement this!
    if (cnt) {
      *cnt = *cnt - 1;
      if (*cnt == 0) {
        delete ptr; 
        delete cnt; 
      }
    }        
  }

  // Return the underlying pointer.
  T* get() const {
    // TODO: Implement this!
    return ptr; 
  }

  // Return the count of SharedPtr's to the same underlying pointer.
  int use_count() const {
    // TODO: Implement this!
    return *cnt; 
  }

private:
  // Declare private members here.
  T* ptr{nullptr}; 
  int* cnt{nullptr}; 

};

// Example payload for a SharedPtr that we will use to test our implementation.
struct Foo {
  int bar = 99;
  friend std::ostream& operator<<(std::ostream& os, const Foo &foo);
};

// Helper for pretty-printing objects of type Foo.
std::ostream& operator<<(std::ostream& os, const Foo &foo) {
  os << foo.bar;
  return os;
}

int main() {
  // Test default construction.
  SharedPtr<Foo> A; 
  std::cout << "A points to: " << A.get() << std::endl;
   
  // Test construction from a pointer.
  SharedPtr<Foo> B(new Foo{2}); 
  std::cout << "B has value: " << *B.get() << ", points to: " << B.get() << ", has count: " << B.use_count() << std::endl;

  return EXIT_SUCCESS;
}
