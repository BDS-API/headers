#pragma once

#include <string>


class ResourcePackTransmissionManager {

public:
    void cleanupResourcePackManager(NetworkIdentifier const&);
    ResourcePackTransmissionManager(Scheduler &);
    void update();
    void getResourcePackDownloadManager(std::string const&)const;
    ~ResourcePackTransmissionManager();
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&);
};
