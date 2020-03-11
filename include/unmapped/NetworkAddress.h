#pragma once

#include "./NetworkAddress.h"
#include <string>


class NetworkAddress {

public:

    bool isValid()const;
    ~NetworkAddress();
    NetworkAddress();
    NetworkAddress(NetworkAddress const&);
    std::string getAddressString()const;
};
