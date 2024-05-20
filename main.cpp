#include <iostream>
#include <vector>

void rikiavimas(std::vector<int>& nesurikiuotas);

int main() {
    std::vector<int> nesurikiuotas = { 1,3,5,4,6,2,8,7,9};
    rikiavimas(nesurikiuotas);
    std::cout << "surikiuotas masyvas: ";
    for (const int& num : nesurikiuotas) {
        std::cout << num << " ";
    }
    return 0;
}

void rikiavimas(std::vector<int>& nesurikiuotas) {
    for (int i = 1; i < nesurikiuotas.size(); i++) {
        int laikinas = nesurikiuotas[i];
        int j = i - 1;

        while (j >= 0 && nesurikiuotas[j] > laikinas) {
            nesurikiuotas[j + 1] = nesurikiuotas[j];
            j--;
        }
        nesurikiuotas[j + 1] = laikinas;
    }
}
