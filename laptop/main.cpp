#include <iostream>
#include "Laptop.h"
using namespace std;

double Laptop::count = 0;

int main() {
    Laptop first("Dell XPS 15", "Dell", 2023, 999.99,
        "Intel Core i5", "2.4 GHz", 2022, 199.99,
        "Samsung 512GB SSD", "550 MB/s", 2021, 79.99, 
        "NVIDIA GeForce GTX 1650", "1500 MHz", 2020, 299.99,
        "Corsair 16GB DDR4", "3200 MHz", 2022, 89.99);

    Laptop second("Apple MacBook Pro 16", "Apple", 2023, 1299.99,
        "Intel Core i7", "3.0 GHz", 2023, 299.99,
        "Samsung 1TB SSD", "600 MB/s", 2022, 129.99,
        "NVIDIA GeForce RTX 3070", "1700 MHz", 2021, 599.99,
        "Corsair 32GB DDR4", "3600 MHz", 2022, 149.99);

    Laptop third("Lenovo ThinkPad X1 Carbon", "Lenovo", 2023, 899.99,
        "Intel Core i5", "2.6 GHz", 2022, 249.99,
        "Crucial 256GB SSD", "500 MB/s", 2021, 69.99,
        "NVIDIA GeForce GTX 1660 Ti", "1500 MHz", 2019, 249.99,
        "Kingston 8GB DDR4", "2666 MHz", 2021, 49.99);

    first.Print();
    cout << "\nSum of first laptop: " << first.CalculateAll() << endl;

    second.Print();
}