#pragma once

class TextPacket : Packet {

public:
    virtual ~TextPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void TextPacket(void);
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
    void TextPacket(TextPacketType, std::string const&, std::string const&, std::vector<std::string, std::allocator<std::string>> const&, bool, std::string const&, std::string const&);
};
