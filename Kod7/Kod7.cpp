#include <iostream>


void shellSort(int arr[], int n) {
    
    for (int gap = n / 2; gap > 0; gap /= 2) {
        
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] < temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int n;
    std::cout << "Введіть кількість елементів у масиві: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << "Масив повинен містити непарну кількість елементів." << std::endl;
        return 1;
    }

    int arr[n];
    std::cout << "Введіть елементи масиву:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

   
    shellSort(arr, n);

   
    std::cout << "Відсортований масив за спаданням: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}