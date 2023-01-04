//
//  Class RacingMotorcycle.cpp
//  Races
//
//  Created by Павел on 04.01.2023.
//

#include "Class RacingMotorcycle.hpp"

RacingMotorcycle:: RacingMotorcycle (){}

int RacingMotorcycle:: getMotoSpeed(){
    return _maxSpeed;
}
int RacingMotorcycle:: getMotoAcceleration(){
    return _acceleration;
}
int RacingMotorcycle:: getMotoPatency(){
    return _vehiclePatency;
    
}
