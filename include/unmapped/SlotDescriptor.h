#pragma once

#include <string>


class SlotDescriptor {

public:
    SlotDescriptor();
    SlotDescriptor(SlotDescriptor const&);
    ~SlotDescriptor();
    void addAcceptedItemByName(std::string const&);
};
