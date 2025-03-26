#include <iostream>
#include <cmath>
using namespace std;

// Kelas Calculator untuk operasi aritmatika dasar
class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b != 0) return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return NAN;
        }
    }
};

// Kelas Student untuk menyimpan data mahasiswa
class Student {
private:
    string name;
    string student_id;
    char grade;
public:
    Student(string n, string id, char g) : name(n), student_id(id), grade(g) {}

    void displayInfo() {
        cout << "Nama: " << name << ", ID: " << student_id << ", Grade: " << grade << endl;
    }
};

// Kelas Rectangle untuk menghitung luas persegi panjang
class Rectangle {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    double calculateArea() { return width * height; }
};

// Kelas Counter untuk menghitung jumlah tertentu
class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    
    void increment() { count++; }
    int getCount() { return count; }
};

// Kelas Point untuk merepresentasikan titik dalam koordinat 2D
class Point {
private:
    double x, y;
public:
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}
    
    double distanceFromOrigin() { return sqrt(x * x + y * y); }
};

int main() {
    // Contoh penggunaan kelas Calculator
    Calculator calc;
    double num1 = 10, num2 = 5;
    
    cout << "Penjumlahan: " << calc.add(num1, num2) << endl;
    cout << "Pengurangan: " << calc.subtract(num1, num2) << endl;
    cout << "Perkalian: " << calc.multiply(num1, num2) << endl;
    cout << "Pembagian: " << calc.divide(num1, num2) << endl;

    // Contoh penggunaan kelas Student
    Student student("Rini Shulhah", "12345", 'A');
    student.displayInfo();

    // Contoh penggunaan kelas Rectangle
    Rectangle rect(7, 3); // width = 7, height = 3
    cout << "Luas Persegi Panjang: " << rect.calculateArea() << endl;

    // Contoh penggunaan kelas Counter
    Counter counter;
    int incrementTimes = 5; // Counter akan dinaikkan 5 kali
    
    for (int i = 0; i < incrementTimes; i++) {
        counter.increment();
    }
    
    cout << "Nilai Counter: " << counter.getCount() << endl;

    // Contoh penggunaan kelas Point
    Point point(6, 8); // x = 6, y = 8
    cout << "Jarak dari Titik Asal: " << point.distanceFromOrigin() << endl;

    return 0;
}
