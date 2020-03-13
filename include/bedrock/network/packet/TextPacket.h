#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class TextPacket : Packet {

public:
    ~TextPacket(); // _ZN10TextPacketD2Ev
    virtual void getId()const; // _ZNK10TextPacket5getIdEv
    virtual std::string getName()const; // _ZNK10TextPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK10TextPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN10TextPacket4readER20ReadOnlyBinaryStream
    TextPacket(); // _ZN10TextPacketC2Ev
    void createRaw(std::string const&); // _ZN10TextPacket9createRawERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void createChat(std::string const&, std::string const&, std::string const&, std::string const&); // _ZN10TextPacket10createChatERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_
    void createTranslatedChat(std::string const&, std::string const&, std::string const&, std::string const&); // _ZN10TextPacket20createTranslatedChatERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_
    void createTranslated(std::string const&, std::vector<std::string> const&); // _ZN10TextPacket16createTranslatedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    void createTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&); // _ZN10TextPacket23createTextObjectMessageERK14TextObjectRootRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_
    void createSystemMessage(std::string const&); // _ZN10TextPacket19createSystemMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void createWhisper(std::string const&, std::string const&, std::string const&, std::string const&); // _ZN10TextPacket13createWhisperERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_
    void createAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&); // _ZN10TextPacket18createAnnouncementERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_
    void createTranslatedAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&); // _ZN10TextPacket28createTranslatedAnnouncementERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_
    void createJukeboxPopup(std::string const&); // _ZN10TextPacket18createJukeboxPopupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  TextPacket(TextPacketType, std::string const&, std::string const&, std::vector<std::string> const&, bool, std::string const&, std::string const&); //TODO: incomplete function definition // _ZN10TextPacketC2E14TextPacketTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_RKSt6vectorIS6_SaIS6_EEbS8_S8_
};
