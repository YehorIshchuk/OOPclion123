

#ifndef OOPCLINE_SALARY_H
#define OOPCLINE_SALARY_H

class Salary {
public:
    int salary;
    int tips;

    Salary();
    Salary(const Salary& other);
    ~Salary();
};

#endif //OOPCLINE_SALARY_H
