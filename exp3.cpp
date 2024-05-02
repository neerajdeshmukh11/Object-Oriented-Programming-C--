#include <iostream>

class DB;

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m, int cm) : meters(m), centimeters(cm) {}

    friend void add(DM dm, DB db);
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int ft, int in) : feet(ft), inches(in) {}

    friend void add(DM dm, DB db);
};

void add(DM dm, DB db) {
    int totalMeters = dm.meters;
    int totalCentimeters = dm.centimeters;

    totalMeters += db.feet * 0.3048;
    totalCentimeters += db.inches * 2.54;

    if (totalCentimeters >= 100) {
        totalMeters += totalCentimeters / 100;
        totalCentimeters %= 100;
    }

    std::cout << "Total Distance: " << totalMeters << " meters " << totalCentimeters << " centimeters" << std::endl;
}

int main() {
    DM dm(5, 50);
    DB db(10, 6);

    add(dm, db);

    return 0;
}
