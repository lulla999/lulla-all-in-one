#include <iostream>
#include <string>

// Base Class
class Vehicle {
private: // Changed from protected to private
    std::string brand;
    int speed;

public:
    void getVehicleData() {
        std::cout << "Enter Brand/Manufacturer: ";
        std::getline(std::cin >> std::ws, brand);
        std::cout << "Enter Top Speed (km/h or knots): ";
        std::cin >> speed;
    }

    void showVehicleData() const {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Top Speed: " << speed << "\n";
    }
};

// Derived Class 1: Car
class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    void getCarData() {
        getVehicleData(); // Accesses base data safely via public method
        std::cout << "Enter Number of Doors: ";
        std::cin >> numberOfDoors;
    }

    void showCarData() const {
        showVehicleData(); // Accesses base data safely via public method
        std::cout << "Number of Doors: " << numberOfDoors << "\n";
    }
};

// Derived Class 2: Boat
class Boat : public Vehicle {
private:
    std::string hullType;

public:
    void getBoatData() {
        getVehicleData();
        std::cout << "Enter Hull Type (e.g., V-Hull, Flat): ";
        std::getline(std::cin >> std::ws, hullType);
    }

    void showBoatData() const {
        showVehicleData();
        std::cout << "Hull Type: " << hullType << "\n";
    }
};

// Derived Class 3: Aeroplane
class Aeroplane : public Vehicle {
private:
    int maxAltitude;

public:
    void getAeroplaneData() {
        getVehicleData();
        std::cout << "Enter Maximum Altitude (feet): ";
        std::cin >> maxAltitude;
    }

    void showAeroplaneData() const {
        showVehicleData();
        std::cout << "Maximum Altitude: " << maxAltitude << " feet\n";
    }
};

int main() {
    std::cout << "=== Hierarchical Inheritance Demo (Private Base Members) ===\n\n";

    Car myCar;
    std::cout << "--- Enter Car Details ---\n";
    myCar.getCarData();
    
    Boat myBoat;
    std::cout << "\n--- Enter Boat Details ---\n";
    myBoat.getBoatData();
    
    Aeroplane myPlane;
    std::cout << "\n--- Enter Aeroplane Details ---\n";
    myPlane.getAeroplaneData();

    std::cout << "\n===============================\n";
    std::cout << "        VEHICLE DETAILS        \n";
    std::cout << "===============================\n";

    std::cout << "\n[ Car Specifications ]\n";
    myCar.showCarData();

    std::cout << "\n[ Boat Specifications ]\n";
    myBoat.showBoatData();

    std::cout << "\n[ Aeroplane Specifications ]\n";
    myPlane.showAeroplaneData();

    return 0;
}