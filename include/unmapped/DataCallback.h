#pragma once

#include "./DataCallback.h"


namespace BatchedNetworkPeer {

class DataCallback {

public:

    ~DataCallback();
    DataCallback(BatchedNetworkPeer::DataCallback &&);
    DataCallback();
};

}