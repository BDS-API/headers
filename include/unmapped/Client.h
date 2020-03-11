#pragma once

#include "./ConnectionRequest.h"
#include <memory>
#include "./SubClientConnectionRequest.h"


namespace ServerNetworkHandler {

class Client {

public:

    void removeSubClientRequest(unsigned char);
    void addSubClientRequest(unsigned char, std::unique_ptr<SubClientConnectionRequest, std::default_delete<SubClientConnectionRequest>>);
    void getPrimaryRequest()const;
    void getSubClientRequests()const;
    Client(std::unique_ptr<ConnectionRequest, std::default_delete<ConnectionRequest>>);
    ~Client();
};

}