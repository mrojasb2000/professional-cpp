// AirliteTicket.cpp

#include <iostream>
#include "AirlineTicket.h"

using namespace std;

AirlineTicket::AirlineTicket(){
    // Initialize data menbers
    mfHasEliteSuperRewardsStatus = false;
    mPassengerName = "Unknown Passenger";
    mNumberOfMiles = 0;
}

AirlineTicket::~AirlineTicket(){
    // Nothing much to do in terms of clenup
}

int AirlineTicket::calculatePriceInDollars(){
    if (getHasEliteSuperRewardsStatus()){
        // Elite Super Rewards customers fly for free!
        return 0;
    }

    // The cost of the ticket is the number of miles times
    // 0.1. real airlines probably have a more complicated formula!
    return static_cast<int>((getNumberOfMiles() * 0.1));
}

string AirlineTicket::getPassengerName(){
    return mPassengerName;
}

void AirlineTicket::setPassengerName(string inName){
    mPassengerName = inName;
}

int AirlineTicket::getNumberOfMiles(){
    return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int inMiles){
    mNumberOfMiles = inMiles;
}

bool AirlineTicket::getHasEliteSuperRewardsStatus(){
    return mfHasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool inStatus){
    mfHasEliteSuperRewardsStatus = inStatus;
}
