#pragma once

#include "../bedrock/network/packet/sender/PacketSender"


class ResourcePackTransmissionManager {

public:

    ResourcePackTransmissionManager(Scheduler &);
    void update(void);
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(std::string const&)const;
    void cleanupResourcePackManager(NetworkIdentifier const&);
};
