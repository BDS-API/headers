#pragma once

#include "./SlotDescriptor.h"
#include <string>


class SlotDescriptor {

public:

    ~SlotDescriptor();
    void addAcceptedItemByName(std::string const&);
    SlotDescriptor();
    SlotDescriptor(SlotDescriptor const&);
};
