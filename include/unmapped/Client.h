#pragma once



using namespace ServerNetworkHandler;

class Client {

public:

    void removeSubClientRequest(unsigned char);
    void addSubClientRequest(unsigned char, std::unique_ptr<SubClientConnectionRequest, std::default_delete<SubClientConnectionRequest>>);
    void getPrimaryRequest()const;
    void getSubClientRequests()const;
    Client(std::unique_ptr<ConnectionRequest, std::default_delete<ConnectionRequest>>);
};
