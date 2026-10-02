#ifndef TIMING_H
#define TIMING_H


#include <QJsonObject>


class timing
{
public:

    timing();


    //==================================================
    // VDA5050 Factsheet -> protocolLimits -> timing
    //==================================================


    float minimumOrderInterval;

    float minimumStateInterval;

    float defaultStateInterval;

    float visualizationInterval;


    QJsonObject toJson() const;


};


#endif // TIMING_H