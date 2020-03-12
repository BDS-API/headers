#pragma once

#include "../network/packet/sender/PacketSender.h"
#include "../../unmapped/NetworkIdentifier.h"
#include "../Scheduler.h"
#include <string>


class ResourcePackTransmissionManager {

public:
    ~ResourcePackTransmissionManager();
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void update();
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackDownloadManager(std::string const&)const;
    ResourcePackTransmissionManager(Scheduler &);
    void cleanupResourcePackManager(NetworkIdentifier const&);
};
