#pragma once

class BookEditPacket : Packet {

public:
    virtual BookEditPacket::~BookEditPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BookEditPacket(BookEditPacket const&);
    BookEditPacket(BookEditPacket&&);
    BookEditPacket(void);
    void _writePage(BinaryStream &)const;
    void _readPage(ReadOnlyBinaryStream &);
    void setToReplacePage(int, int, PageContent const&);
    void _storePage(PageContent const&);
    void setToAddPage(int, int, PageContent const&);
    void setToDeletePage(int, int);
    void setToSwapPages(int, int, int);
    void setToFinalize(int, std::string, std::string, std::string);
    void getPage(void)const;
};
