#include <iostream>
#include <math.h>

// Angle type
enum Type{RADIAN, DEGREE};

// Angle class
class Angle{
    double angle {0};
    Type type {RADIAN};

public:

    // Constructor
    Angle(double ang, Type pass_type){
        // Initial passed variables
        this->type = pass_type;
        this->angle = ang;
        std::cout << "... creating from ";
        
        // Check angle type and convert to Radians if needed
        if(pass_type == RADIAN){
            
            angle = toInRange(angle);
            
            std::cout << "radians." << std::endl;
        } else {
            toRad(); // Convert degrees to radians
            angle = toInRange(angle);
            std::cout << "degrees." << std::endl;
        }
    };

    // Convert object's angle to radians
    double toRad() const{
        if(type == DEGREE){
            return (2*3.14*angle)/360;
        }

        return angle;
    };

    // Convert object's angle to degrees
    double toDeg() const{
        if(type == RADIAN){
            return (angle*360)/(2*3.14);
        }

        return angle;
    };

    // Convert object's angle to (0, 2PI) radians range
    double toInRange(double angle){
        if(angle > 0)
        while(angle > 2) angle -= 2; // Angle in (0, 2PI) range
        else
        while(angle < 0) angle += 2; // Angle in (0, 2PI) range

        return angle;
    };

    // Add two objects' angles
    void add(Angle phi){
        angle = angle + phi.angle;
    };

};

