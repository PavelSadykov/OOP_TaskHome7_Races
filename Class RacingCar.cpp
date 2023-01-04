//
//  Class RacingCar.cpp
//  Races
//
//  Created by Павел on 04.01.2023.
//

#include "Class RacingCar.hpp"

RacingCar::RacingCar(){}

int RacingCar:: getCarSpeed(){
    return _maxSpeed;
}
int RacingCar:: getCarAcceleration(){
    return _acceleration;
}
int RacingCar:: getCarPatency(){
    return _vehiclePatency;
    
}
