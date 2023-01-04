//
//  main.cpp
//  Races
//
//  Created by Павел on 04.01.2023.
//
#include "Class RacingMotorcycle.hpp"
#include "Class RacingCar.hpp"
#include <iostream>

bool race(RacingCar car,RacingMotorcycle motorcycle,std::string cross_countryTrack, std::string ring_raceTrack, int N);

int main(int argc, const char * argv[]) {
    RacingCar car;
    RacingMotorcycle motorcycle;
    std::string cross_countryTrack, ring_raceTrack;
    int X,Y;
    do{
        std::cout<<"\nPlease, select the Track for racing: \n1 - Cross-country Track \n2 - Ring race Track \n3 - To finish programme\n->   ";
        std::cin>>X;
        switch (X) {
            case 1:
                
                std::cout<<race(car, motorcycle,  cross_countryTrack, ring_raceTrack,1);
                break;
            case 2:
                
               std::cout<< race(car, motorcycle,  cross_countryTrack, ring_raceTrack,2);
                break;
                
            case 3:
                std::cout<<" The game is over "<<std::endl;
                exit(0);
                break;
                
            default:std::cout<<"Input Error, repeat the input"<<std::endl;
                break;
        }
    
    }while (Y!=5);
           
    
    return 0;
}
bool race(RacingCar car,RacingMotorcycle Motorcycle ,std::string cross_countryTrack, std::string ring_raceTrack, int N){
    int A1,S1,P1,A2,S2,P2, rating1=0, rating2=0;
    A1=car.getCarAcceleration();
    S1=car.getCarSpeed();
    P1=car.getCarPatency();
    A2=Motorcycle.getMotoAcceleration();
    S2=Motorcycle.getMotoSpeed();
    P2=Motorcycle.getMotoPatency();
    
    if(N==1){
        std::cout<<"\nThe race takes place over CROSS-COUTRY TRACK"<<std::endl;
        std::cout<<"\nThe technical characteristics of the Car : "<<std::endl;
        std::cout<< "Acceleration : "<<car.getCarAcceleration()<<std::endl;
        std::cout<< "Max Speed : "<<car.getCarSpeed()<<std::endl;
        std::cout<< "Patency : "<<car.getCarPatency()<<std::endl;
        std::cout<<"\nThe technical characteristics of the Motocyrcle : "<<std::endl;
        std::cout<< "Acceleration : "<<Motorcycle.getMotoAcceleration()<<std::endl;
        std::cout<< "Max Speed : "<<Motorcycle.getMotoSpeed()<<std::endl;
        std::cout<< "Patency : "<<Motorcycle.getMotoPatency()<<std::endl;
           if(A1>A2){
               rating1=5;
               rating2=3;
           }else{
            rating2=5;
            rating1=3;
           }
           if(S1>S2){
               rating1+=5;
               rating2+=3;
           }else{
            rating2+=5;
            rating1+=3;
           }
           if(P1>P2){
               rating1+=5;
               rating2+=2;
           }else{
            rating2+=5;
            rating1+=2;
           }
           std::cout<<"\nRatings of the current race on CROSS-COUTRY TRACK"<<std::endl;
           std::cout<<"Score of Car : "<<rating1<<std::endl;
           std::cout<<"Score of Motorcycle : "<<rating2<<std::endl;
       
    if(rating1 > rating2){
        std::cout<<"The winner is a Car !"<<std::endl;
        return true;
    }else{
        std::cout<<"The winner is a Motorcycle !"<<std::endl;
        return false;
        
    }
}else{
        std::cout<<"\nThe race takes place over RING RACE TRACK"<<std::endl;
        std::cout<<"\nThe technical characteristics of the Car : "<<std::endl;
        std::cout<< "Acceleration : "<<car.getCarAcceleration()<<std::endl;
        std::cout<< "Max Speed : "<<car.getCarSpeed()<<std::endl;
        std::cout<< "Patency : "<<car.getCarPatency()<<std::endl;
        std::cout<<"\nThe technical characteristics of the Motocyrcle : "<<std::endl;
        std::cout<< "Acceleration : "<<Motorcycle.getMotoAcceleration()<<std::endl;
        std::cout<< "Max Speed : "<<Motorcycle.getMotoSpeed()<<std::endl;
        std::cout<< "Patency : "<<Motorcycle.getMotoPatency()<<std::endl;
   
   if(A1>A2){
       rating1=5;
       rating2=3;
   }else{
    rating2=5;
    rating1=3;
   }
   if(S1>S2){
       rating1+=5;
       rating2+=2;
   }else{
    rating2+=5;
    rating1+=2;
   }
   if(P1>P2){
       rating1+=0;
       rating2+=0;
   }else{
    rating2+=0;
    rating1+=0;
   }
   std::cout<<"\nRatings of the current race on RING RACE TRACK"<<std::endl;
   std::cout<<"Score of Car : "<<rating1<<std::endl;
   std::cout<<"Score of Motorcycle : "<<rating2<<std::endl;
}
if(rating1 > rating2){
std::cout<<"The winner is a Car !"<<std::endl;
return true;
}else{
std::cout<<"The winner is a Motorcycle !"<<std::endl;
return false;

}}

