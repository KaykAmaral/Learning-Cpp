#include <iostream>
#include <vector>
#include <algorithm>

void bubbleSort(std::vector<int>& arr) {

    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
    
        for (int j = 0; j < n - i - 1; ++j) {
        
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            
            }

        }

    }

}

int buscaBinaria(const std::vector<int>& arr, int target) {

    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> dados = { 64, 34, 25, 12, 22, 11, 90 };

    for (int val : dados) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    bubbleSort(dados);

    std::cout << "Vetor ordenado (Bubble Sort): ";
    for (int val : dados) {
        std::cout << val << " ";
    }
    std::cout << "\n";

    int valorParaBuscar = 2684562;
    int indice = buscaBinaria(dados, valorParaBuscar);

    if (indice != -1) {
        std::cout << "O valor " << valorParaBuscar << " foi encontrado no indice: " << indice << "\n";
    }
    else {
        std::cout << "O valor " << valorParaBuscar << " nao foi encontrado.\n";
    }

    return 0;
}