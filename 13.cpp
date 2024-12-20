class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void setDetails(int empId, string empName, float empSalary) {
        id = empId;
        name = empName;
        salary = empSalary;
    }
    void displayDetails() {
        cout << "Employee ID: " << id << "\nEmployee Name: " << name << "\nEmployee Salary: " << salary << endl;
    }
};