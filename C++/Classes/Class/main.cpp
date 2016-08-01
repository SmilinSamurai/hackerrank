#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int Student_age) {
            age = Student_age;
        }
        int get_age() {
            return age;
        }
        void set_first_name(string Student_firstname) {
          first_name = Student_firstname;
        }
        string get_first_name() {
          return first_name;
        }
        void set_last_name(string Student_lastname) {
          last_name = Student_lastname;
        }
        string get_last_name() {
          return last_name;
        }
        void set_standard(int Student_standard) {
          standard = Student_standard;
        }
        int get_standard() {
          return standard;
        }
        string to_string() {
          stringstream ss;
          ss << age << "," << first_name << "," << last_name << "," << standard;
          string Student_results = ss.str();
          return Student_results;
        }

};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
