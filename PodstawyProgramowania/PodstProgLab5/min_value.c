//
// Created by jakub on 10.11.2023.
//

#include "min_value.h"

double min_value(double a, double b){

    if (a < b){
        return a;
    } else if ( a > b){
        return b;
    }else{
        return a;
    }
}

double max_value(double a, double b){

    if (a > b){
        return a;
    } else if ( a < b){
        return b;
    }else{
        return a;
    }
}