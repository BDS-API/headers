#pragma once

#include "../network/packet/sender/PacketSender"
#include "../../unmapped/NetworkIdentifier"
#include "../Scheduler"


class ResourcePackTransmissionManager {

public:

    ResourcePackTransmissionManager(Scheduler &);
    void update();
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(std::string const&)const;
    void cleanupResourcePackManager(NetworkIdentifier const&);
};
