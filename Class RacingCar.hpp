//
//  Class RacingCar.hpp
//  Races
//
//  Created by Павел on 04.01.2023.
//

#ifndef Class_RacingCar_hpp
#define Class_RacingCar_hpp

#include <stdio.h>

class RacingCar{
public:
    RacingCar();
    int getCarSpeed();
    int getCarAcceleration();
    int getCarPatency();
    
private:
    int _maxSpeed = 350;
    int _acceleration=2;
    int _vehiclePatency=2;
    
    
    
    
};




#endif /* Class_RacingCar_hpp */
