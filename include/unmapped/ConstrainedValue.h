#pragma once

#include <utility>
#include "./ConstrainedValue.h"


namespace CommandRegistry {

class ConstrainedValue {

public:

    ConstrainedValue(std::pair<unsigned long, unsigned int> const&);
    ConstrainedValue(CommandRegistry::ConstrainedValue &&);
    ~ConstrainedValue();
};

}