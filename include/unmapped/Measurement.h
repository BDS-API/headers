#pragma once



using namespace Social::Events;

class Measurement {

public:

    Measurement(Social::Events::Measurement const&);
    void getValue()const;
    void updateMeasurement(Social::Events::Measurement const&);
};
