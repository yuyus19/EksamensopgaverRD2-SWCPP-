#include <iostream>

#include "Product.h"
#include "A.h"

using namespace std;

//Test kode for opgave 1
int opg1(){
    // Test kode for del 1
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Test Opgave 1a --" << std::endl;
    std::cout << "--------------------" << std::endl;
    char productname[] = "Product 1";
    Product p1(productname, 15.1);
    Product p2;
    productname[8] = '2';
    p2.setName(productname);
    p2.setPrice(30.2);
    Product p3;
    p3.setName("Product 3");
    p3.setPrice(10.3);
    Product p4("Product 4", 14.4);
    Product p5(p4);
    Product p6(std::move(p3));
    std::cout << "Product name | Price" << std::endl;
    std::cout << p1.getName() << " " << p1.getPrice() << std::endl;
    std::cout << p2.getName() << " " << p2.getPrice() << std::endl;
    std::cout << p3.getName() << " " << p3.getPrice() << std::endl;
    std::cout << p4.getName() << " " << p4.getPrice() << std::endl;
    std::cout << p5.getName() << " " << p5.getPrice() << std::endl;
    std::cout << p6.getName() << " " << p6.getPrice() << std::endl;
    std::cout << std::endl;

    // Test kode for del 2
    std::cout << "--------------------" << std::endl;
    std::cout << "-- Test Opgave 1b --" << std::endl;
    std::cout << "--------------------" << std::endl;
    Product p7("Product 7", 14.7);
    Product p8;
    p8 = p7;
    p5 = std::move(p4);
    bool p7ep8 = (p7==p8);
    bool p6ep2 = (p6==p2);
    std::cout << "Product name | Price" << std::endl;
    std::cout << p2.getName() << " " << p2.getPrice() << std::endl;
    std::cout << p5.getName() << " " << p5.getPrice() << std::endl;
    std::cout << p7.getName() << " " << p7.getPrice() << std::endl;
    std::cout << p8.getName() << " " << p8.getPrice() << std::endl;
    std::cout << std::boolalpha << p7ep8 << std::endl;
    std::cout << std::boolalpha << p6ep2 << std::endl;
    std::cout << p8 << std::endl;
    std::cout << std::endl;
    return 0;

}

// Test kode for opgave 2
int opg2(){

    A a;
     try {
     std::cout << std::endl << "1: Calling a.f(-1,-1)" << std::endl;
     a.f(-1,-1);
     } catch (std::exception& e) {
     std::cerr << "1: " << e.what() << std::endl;
     }
     try {
     std::cout << std::endl << "2: Calling a.f(1,1)" << std::endl;
     a.f(1,1);
     } catch (std::exception& e) {
     std::cerr << "2: " << e.what() << std::endl;
     }
     try {
     std::cout << std::endl << "3: Calling a.f(1,0)" << std::endl;
     a.f(1,0);
     } catch (std::exception& e) {
     std::cerr << "3: " << e.what() << std::endl;
     }
     try {
     std::cout << std::endl << "4: Calling a.f(0,-1)" << std::endl;
     a.f(0,-1);
     } catch (std::exception& e) {
     std::cerr << "4: " << e.what() << std::endl;
     }


    return 0;

}
int main()
{
    //opg1();
    //opg2();
    return 0;
}
