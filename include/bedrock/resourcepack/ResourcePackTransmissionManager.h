#pragma once

#include "../network/packet/sender/PacketSender.h"
#include "../Scheduler.h"
#include "../../unmapped/NetworkIdentifier.h"
#include <string>


class ResourcePackTransmissionManager {

public:

    ResourcePackTransmissionManager(Scheduler &);
    ~ResourcePackTransmissionManager();
    void update();
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(std::string const&)const;
    void cleanupResourcePackManager(NetworkIdentifier const&);
};
