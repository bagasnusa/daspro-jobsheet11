#include <iostream>
#include <vector>
#include <string>

// Struktur data untuk siswa
struct Student {
    std::string name;
    int id;
    std::vector<int> grades;
};

// Struktur data untuk kursus
struct Course {
    std::string courseName;
    int courseId;
};

// Fungsi untuk menghitung rata-rata nilai
double calculateAverage(const std::vector<int>& grades) {
    if (grades.empty()) {
        return 0.0;
    }

    int sum = 0;
    for (int grade : grades) {
        sum += grade;
    }

    return static_cast<double>(sum) / grades.size();
}

int main() {
    // Membuat beberapa siswa dan kursus
    std::vector<Student> students = {
        {"Alice", 1, {90, 85, 88}},
        {"Bob", 2, {78, 92, 85}},
        {"Charlie", 3, {95, 89, 91}}
    };

    std::vector<Course> courses = {
        {"Mathematics", 101},
        {"Physics", 102},
        {"Computer Science", 103}
    };

    // Menampilkan data siswa dan kursus
    std::cout << "List of Students:\n";
    for (const auto& student : students) {
        std::cout << "ID: " << student.id << ", Name: " << student.name << "\n";
        std::cout << "Grades: ";
        for (int grade : student.grades) {
            std::cout << grade << " ";
        }
        std::cout << "\nAverage Grade: " << calculateAverage(student.grades) << "\n\n";
    }

  }  std::cout << "\nList of Courses:\n";
 

