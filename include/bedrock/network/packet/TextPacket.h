#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../text/TextObjectRoot.h"
#include <vector>
#include "Packet.h"


class TextPacket : Packet {

public:
    ~TextPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    void createAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&);
    void createTranslated(std::string const&, std::vector<std::string> const&);
    void createWhisper(std::string const&, std::string const&, std::string const&, std::string const&);
    TextPacket();
    void createTranslatedAnnouncement(std::string const&, std::string const&, std::string const&, std::string const&);
    void createJukeboxPopup(std::string const&);
    void createRaw(std::string const&);
    void createChat(std::string const&, std::string const&, std::string const&, std::string const&);
//  TextPacket(TextPacketType, std::string const&, std::string const&, std::vector<std::string> const&, bool, std::string const&, std::string const&); //TODO: incomplete function definition
    void createSystemMessage(std::string const&);
    void createTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
    void createTranslatedChat(std::string const&, std::string const&, std::string const&, std::string const&);
};
