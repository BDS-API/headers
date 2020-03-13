#pragma once

#include <string>


class ResourcePackTransmissionManager {

public:
    ResourcePackTransmissionManager(Scheduler &); // _ZN31ResourcePackTransmissionManagerC2ER9Scheduler
    ~ResourcePackTransmissionManager(); // _ZN31ResourcePackTransmissionManagerD2Ev
    void update(); // _ZN31ResourcePackTransmissionManager6updateEv
    void getResourcePackUploadManager(PacketSender &, NetworkIdentifier const&, std::string const&); // _ZN31ResourcePackTransmissionManager28getResourcePackUploadManagerER12PacketSenderRK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getResourcePackDownloadManager(PacketSender &, NetworkIdentifier const&, std::string const&); // _ZN31ResourcePackTransmissionManager30getResourcePackDownloadManagerER12PacketSenderRK17NetworkIdentifierRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getResourcePackDownloadManager(std::string const&)const; // _ZNK31ResourcePackTransmissionManager30getResourcePackDownloadManagerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void cleanupResourcePackManager(NetworkIdentifier const&); // _ZN31ResourcePackTransmissionManager26cleanupResourcePackManagerERK17NetworkIdentifier
};
