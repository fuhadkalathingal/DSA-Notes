#include <bits/stdc++.h>
using namespace std;

class Car {
    private:
    string brand;
    string model;
    int year;

    public:
    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }
    string getBrand() {
        return this->brand;
    }

    void setModel(string model) {
        this->model = model;
    }
    string getModel() {
        return this->model;
    }

    void setYear(int year) {
        this->year = year;
    }
    int getYear() {
        return this->year;
    }
};

int main() {

    Car car_1("BMW", "Hybrid", 2024);

    cout << car_1.getBrand() << endl;
    cout << car_1.getModel() << endl;
    cout << car_1.getYear() << endl;

    return 0;
}