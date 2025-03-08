#include <stdio.h>  
struct address {  
    int doorno;  
    char street[55];  
};  
struct student {  
    int age;  
    char name[55];  
    struct address add;  
};  
void print_data(struct student w) {  
    printf("Name: %s\n", w.name);  
    printf("Age: %d\n", w.age);  
    printf("Door Number: %d\n", w.add.doorno);  
    printf("Street: %s\n", w.add.street);  
}  
int main() {  
    struct address add = {123, "Main Street"};  
    struct student abhishek = {19, "Abhishek", add};  
    print_data(abhishek);  
    return 0;  
}  