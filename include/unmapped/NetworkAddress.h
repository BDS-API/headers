#pragma once



class NetworkAddress {

public:
    ~NetworkAddress();
    std::string getAddressString()const;
    NetworkAddress();
    bool isValid()const;
    NetworkAddress(NetworkAddress const&);
};
