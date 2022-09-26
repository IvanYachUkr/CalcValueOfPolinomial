#include <iostream>
#include <cmath>

int main() {
    srand(time(nullptr));

    int num_of_rand_nums;
    std::cout << "How many random numbers would you like to generate? : " << "\n";
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

    int polynomial_degree;
    std::cout << "Please enter the degree of polynomial: ";
    std::cin >> polynomial_degree;

    int f_1 = 0;
    int f_2 = 0;

    for (int i = 0; i < polynomial_degree; ++i) {

        int polynomial_coefficient;
        std::cout << "Please enter " << i + 1 << " polynomial coefficient: " << "\n";
        std::cin >> polynomial_coefficient;
        f_1 += polynomial_coefficient;
        f_2 += polynomial_coefficient * (int)pow(2, polynomial_degree - i);


    }
    int last_polynomial_coefficient;
    std::cout << "Please enter last polynomial coefficient: " << "\n";
    std::cin >> last_polynomial_coefficient;
    int f_0 = last_polynomial_coefficient;
    f_1 += last_polynomial_coefficient;
    f_2 += last_polynomial_coefficient;

    std::cout << "f(0) = " << f_0 << "\n";
    std::cout << "f(1) = " << f_1 << "\n";
    std::cout << "f(2) = " << f_2 << "\n";



    return 0;
}
