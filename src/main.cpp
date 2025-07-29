#include <iostream>

struct product {
    int id;
    int price;
    int stock;
};

int main() {
    product pen;

    pen.id = 1;
    pen.price = 100;
    pen.stock = 200;

    product* ptr = &pen;

    std::cout << "商品ID: " << ptr->id << std::endl;
    std::cout << "単価: " << ptr->price << std::endl;
    std::cout << "在庫数: " << ptr->stock << std::endl;
}