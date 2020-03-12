#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../../unmapped/PageContent.h"
#include "Packet.h"


class BookEditPacket : Packet {

public:
    ~BookEditPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    void setToDeletePage(int, int);
    void setToReplacePage(int, int, PageContent const&);
    BookEditPacket();
    void setToAddPage(int, int, PageContent const&);
    void _writePage(BinaryStream &)const;
    BookEditPacket(BookEditPacket &&);
    void setToFinalize(int, std::string, std::string, std::string);
    void setToSwapPages(int, int, int);
    BookEditPacket(BookEditPacket const&);
    void getPage()const;
    void _storePage(PageContent const&);
    void _readPage(ReadOnlyBinaryStream &);
};
