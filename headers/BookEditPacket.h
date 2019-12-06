#pragma once

class BookEditPacket : Packet {

public:
    virtual ~BookEditPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void BookEditPacket(BookEditPacket const&);
    void BookEditPacket(BookEditPacket&&);
    void BookEditPacket(void);
    void _writePage(BinaryStream &)const;
    void _readPage(ReadOnlyBinaryStream &);
    void setToReplacePage(int, int, PageContent const&);
    void _storePage(PageContent const&);
    void setToAddPage(int, int, PageContent const&);
    void setToDeletePage(int, int);
    void setToSwapPages(int, int, int);
    void setToFinalize(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void getPage(void)const;
};
