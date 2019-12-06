#pragma once

class ResourcePackTransmissionManager {

public:

    void ResourcePackTransmissionManager(Scheduler &);
    void update(void);
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getResourcePackDownloadManager(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void cleanupResourcePackManager(NetworkIdentifier const&);
};
