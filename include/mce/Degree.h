#pragma once

#include "./Radian.h"


namespace mce {

class Degree {

public:

    Degree(mce::Radian);
    bool asFloat()const;
};

}