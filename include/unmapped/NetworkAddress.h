#pragma once

#include <string>


class NetworkAddress {

public:
    ~NetworkAddress();
    NetworkAddress();
    bool isValid()const;
    NetworkAddress(NetworkAddress const&);
    std::string getAddressString()const;
};
