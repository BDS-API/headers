#pragma once

#include <string>
#include "IFileReadAccess.h"
#include "IFileAccess.h"
#include "IFileWriteAccess.h"


class FileSystemFileAccess : IFileAccess {

public:
    class FileSystemFileReadAccess;
    class FileSystemFileWriteAccess;

    ~FileSystemFileAccess(); // _ZN20FileSystemFileAccessD2Ev
    virtual void fopen(Core::Path const&, std::string const&); // _ZN20FileSystemFileAccess5fopenERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fclose(void *); // _ZN20FileSystemFileAccess6fcloseEPv
    virtual void fseek(void *, long, int); // _ZN20FileSystemFileAccess5fseekEPvli
    virtual void ftell(void *); // _ZN20FileSystemFileAccess5ftellEPv
    virtual void getReadInterface()const; // _ZNK20FileSystemFileAccess16getReadInterfaceEv
    virtual void getWriteInterface(); // _ZN20FileSystemFileAccess17getWriteInterfaceEv
    virtual void unload(); // _ZN20FileSystemFileAccess6unloadEv
//  FileSystemFileAccess(FileSystemMode); //TODO: incomplete function definition // _ZN20FileSystemFileAccessC2E14FileSystemMode
    class FileSystemFileReadAccess : IFileReadAccess {

    public:
        ~FileSystemFileReadAccess(); // _ZN20FileSystemFileAccess24FileSystemFileReadAccessD2Ev
        virtual void fread(void *, unsigned long, unsigned long, void *)const; // _ZNK20FileSystemFileAccess24FileSystemFileReadAccess5freadEPvmmS1_
        FileSystemFileReadAccess(); // _ZN20FileSystemFileAccess24FileSystemFileReadAccessC2Ev
    };
    class FileSystemFileWriteAccess : IFileWriteAccess {

    public:
        ~FileSystemFileWriteAccess(); // _ZN20FileSystemFileAccess25FileSystemFileWriteAccessD2Ev
        virtual void fwrite(void const*, unsigned long, unsigned long, void *); // _ZN20FileSystemFileAccess25FileSystemFileWriteAccess6fwriteEPKvmmPv
        FileSystemFileWriteAccess(); // _ZN20FileSystemFileAccess25FileSystemFileWriteAccessC2Ev
    };
};
