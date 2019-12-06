#pragma once

class ServerNetworkHandler::Client {

public:

    void removeSubClientRequest(unsigned char);
    void addSubClientRequest(unsigned char, std::unique_ptr<SubClientConnectionRequest, std::default_delete<SubClientConnectionRequest>>);
    void getPrimaryRequest(void)const;
    void getSubClientRequests(void)const;
    void Client(std::unique_ptr<ConnectionRequest, std::default_delete<ConnectionRequest>>);
};
