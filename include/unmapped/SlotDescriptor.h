#pragma once

#include <string>


class SlotDescriptor {

public:
    void addAcceptedItemByName(std::string const&);
    ~SlotDescriptor();
    SlotDescriptor();
    SlotDescriptor(SlotDescriptor const&);
};
