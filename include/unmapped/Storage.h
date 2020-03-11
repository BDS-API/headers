#pragma once

#include "./Storage.h"


namespace LayerDetails {

class Storage {

public:

    Storage(unsigned long);
    ~Storage();
    Storage(LayerDetails::Storage &&);
};

}