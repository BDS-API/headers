#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include <vector>
#include "../../text/TextObjectRoot.h"
#include <string>


class TextPacket : Packet {

public:
    virtual ~TextPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    TextPacket();
    void createRaw(std::string const&);
    void createChat(std::string const&, std::string const&, std::string const&, std::string const&);
    void createTranslatedChat(std::string const&, std::string const&, std::string const&, std::string const&);
    void createTranslated(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void createTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
    void createSystemMessage(std::string const&);
    void createWhisper(std::string const&, std::string const&, std::string const&, std::string const&);
    void createAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&);
    void createTranslatedAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&);
    void createJukeboxPopup(std::string const&);
//  TextPacket(TextPacketType, std::string const&, std::string const&, std::vector<std::string, std::allocator<std::string>> const&, bool, std::string const&, std::string const&); //TODO: incomplete function definition
};
