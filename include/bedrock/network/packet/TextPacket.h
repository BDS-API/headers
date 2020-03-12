#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class TextPacket : Packet {

public:
    virtual std::string getName()const;
    ~TextPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    void createTranslatedAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&);
//  TextPacket(TextPacketType, std::string const&, std::string const&, std::vector<std::string> const&, bool, std::string const&, std::string const&); //TODO: incomplete function definition
    void createRaw(std::string const&);
    void createSystemMessage(std::string const&);
    TextPacket();
    void createWhisper(std::string const&, std::string const&, std::string const&, std::string const&);
    void createJukeboxPopup(std::string const&);
    void createTranslatedChat(std::string const&, std::string const&, std::string const&, std::string const&);
    void createTranslated(std::string const&, std::vector<std::string> const&);
    void createAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&);
    void createTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
    void createChat(std::string const&, std::string const&, std::string const&, std::string const&);
};
