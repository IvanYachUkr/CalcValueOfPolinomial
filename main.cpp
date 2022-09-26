#include <iostream>

int main() {
    srand(time(nullptr));

    int num_of_rand_nums;
    std::cout << "How many random numbers would you like to generate? : ";
    std::cin >> num_of_rand_nums;


    for (int i = 0; i < num_of_rand_nums; i++) {
        int rand_num = rand();
        std::cout << rand_num<< "\n";
    }


    return 0;
}
