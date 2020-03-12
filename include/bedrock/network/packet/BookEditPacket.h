#pragma once

#include <string>
#include "Packet.h"


class BookEditPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~BookEditPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    void _storePage(PageContent const&);
    void setToSwapPages(int, int, int);
    void setToReplacePage(int, int, PageContent const&);
    BookEditPacket(BookEditPacket &&);
    void setToFinalize(int, std::string, std::string, std::string);
    void _readPage(ReadOnlyBinaryStream &);
    void setToAddPage(int, int, PageContent const&);
    BookEditPacket(BookEditPacket const&);
    BookEditPacket();
    void getPage()const;
    void _writePage(BinaryStream &)const;
    void setToDeletePage(int, int);
};
