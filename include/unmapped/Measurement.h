#pragma once

#include "./Measurement.h"


namespace Social::Events {

class Measurement {

public:

    ~Measurement();
    Measurement(Social::Events::Measurement const&);
    void getValue()const;
    void updateMeasurement(Social::Events::Measurement const&);
};

}