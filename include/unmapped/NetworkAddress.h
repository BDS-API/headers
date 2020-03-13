#pragma once

#include <string>


class NetworkAddress {

public:
    bool isValid()const; // _ZNK14NetworkAddress7isValidEv
    ~NetworkAddress(); // _ZN14NetworkAddressD2Ev
    NetworkAddress(); // _ZN14NetworkAddressC2Ev
    NetworkAddress(NetworkAddress const&); // _ZN14NetworkAddressC2ERKS_
    std::string getAddressString()const; // _ZNK14NetworkAddress16getAddressStringB5cxx11Ev
};
