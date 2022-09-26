#include <iostream>

int main() {
    srand(time(nullptr));

    int num_of_rand_nums;
    std::cout << "How many random numbers would you like to generate? : ";
    std::cin >> num_of_rand_nums;

    int min = RAND_MAX;
    int max = 0;
    int sum_of_even_nums = 0;
    for (int i = 0; i < num_of_rand_nums; i++) {
        int rand_num = rand();
        std::cout << rand_num<< "\n";

        if (max < rand_num ){
            max = rand_num;
        }
        if (min > rand_num ){
            min = rand_num;
        }

        if (rand_num%2 == 0){
            sum_of_even_nums += rand_num;
        }
    }
    std::cout << "Maximum generated value is " << max << "\n";
    std::cout << "Minimum generated value is " << min << "\n";
    std::cout << "Sum of generated even numbers is " << sum_of_even_nums << "\n";



    return 0;
}
