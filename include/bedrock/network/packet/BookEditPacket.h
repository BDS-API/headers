#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./BookEditPacket.h"
#include "./Packet.h"
#include "../../../unmapped/PageContent.h"
#include <string>


class BookEditPacket : Packet {

public:
    virtual ~BookEditPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BookEditPacket(BookEditPacket const&);
    BookEditPacket(BookEditPacket &&);
    BookEditPacket();
    void _writePage(BinaryStream &)const;
    void _readPage(ReadOnlyBinaryStream &);
    void setToReplacePage(int, int, PageContent const&);
    void _storePage(PageContent const&);
    void setToAddPage(int, int, PageContent const&);
    void setToDeletePage(int, int);
    void setToSwapPages(int, int, int);
    void setToFinalize(int, std::string, std::string, std::string);
    void getPage()const;
};
