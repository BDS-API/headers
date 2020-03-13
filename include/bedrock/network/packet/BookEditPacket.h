#pragma once

#include <string>
#include "Packet.h"


class BookEditPacket : Packet {

public:
    ~BookEditPacket(); // _ZN14BookEditPacketD2Ev
    virtual void getId()const; // _ZNK14BookEditPacket5getIdEv
    virtual std::string getName()const; // _ZNK14BookEditPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK14BookEditPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN14BookEditPacket4readER20ReadOnlyBinaryStream
    BookEditPacket(BookEditPacket const&); // _ZN14BookEditPacketC2ERKS_
    BookEditPacket(BookEditPacket &&); // _ZN14BookEditPacketC2EOS_
    BookEditPacket(); // _ZN14BookEditPacketC2Ev
    void _writePage(BinaryStream &)const; // _ZNK14BookEditPacket10_writePageER12BinaryStream
    void _readPage(ReadOnlyBinaryStream &); // _ZN14BookEditPacket9_readPageER20ReadOnlyBinaryStream
    void setToReplacePage(int, int, PageContent const&); // _ZN14BookEditPacket16setToReplacePageEiiRK11PageContent
    void _storePage(PageContent const&); // _ZN14BookEditPacket10_storePageERK11PageContent
    void setToAddPage(int, int, PageContent const&); // _ZN14BookEditPacket12setToAddPageEiiRK11PageContent
    void setToDeletePage(int, int); // _ZN14BookEditPacket15setToDeletePageEii
    void setToSwapPages(int, int, int); // _ZN14BookEditPacket14setToSwapPagesEiii
    void setToFinalize(int, std::string, std::string, std::string); // _ZN14BookEditPacket13setToFinalizeEiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_S5_
    void getPage()const; // _ZNK14BookEditPacket7getPageEv
};
