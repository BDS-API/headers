#pragma once

#include <memory>
#include "IFileWriteAccess.h"
#include <string>
#include "IFileReadAccess.h"
#include "IFileAccess.h"


class MemoryMappedFileAccess : IFileAccess {

public:
    class MemoryMappedFileReadAccess;
    class MemoryMappedFileWriteAccess;
    class StreamDetails;

    static long EMPTY_TRANSFORMS;

    ~MemoryMappedFileAccess(); // _ZN22MemoryMappedFileAccessD2Ev
    virtual void fopen(Core::Path const&, std::string const&); // _ZN22MemoryMappedFileAccess5fopenERKN4Core4PathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void fclose(void *); // _ZN22MemoryMappedFileAccess6fcloseEPv
    virtual void fseek(void *, long, int); // _ZN22MemoryMappedFileAccess5fseekEPvli
    virtual void ftell(void *); // _ZN22MemoryMappedFileAccess5ftellEPv
    virtual void getReadInterface()const; // _ZNK22MemoryMappedFileAccess16getReadInterfaceEv
    virtual void getWriteInterface(); // _ZN22MemoryMappedFileAccess17getWriteInterfaceEv
    virtual void unload(); // _ZN22MemoryMappedFileAccess6unloadEv
    MemoryMappedFileAccess(IFileAccess &, std::unique_ptr<FileAccessTransforms>); // _ZN22MemoryMappedFileAccessC2ER11IFileAccessSt10unique_ptrI20FileAccessTransformsSt14default_deleteIS3_EE
    void _requestedOpenIsCompatibleWithOpenStream(MemoryMappedFileAccess::StreamDetails &, bool, bool)const; // _ZNK22MemoryMappedFileAccess40_requestedOpenIsCompatibleWithOpenStreamERNS_13StreamDetailsEbb
    void _getTransforms()const; // _ZNK22MemoryMappedFileAccess14_getTransformsEv
    class MemoryMappedFileReadAccess : IFileReadAccess {

    public:
        ~MemoryMappedFileReadAccess(); // _ZN22MemoryMappedFileAccess26MemoryMappedFileReadAccessD2Ev
        virtual void fread(void *, unsigned long, unsigned long, void *)const; // _ZNK22MemoryMappedFileAccess26MemoryMappedFileReadAccess5freadEPvmmS1_
        MemoryMappedFileReadAccess(); // _ZN22MemoryMappedFileAccess26MemoryMappedFileReadAccessC2Ev
    };
    class MemoryMappedFileWriteAccess : IFileWriteAccess {

    public:
        ~MemoryMappedFileWriteAccess(); // _ZN22MemoryMappedFileAccess27MemoryMappedFileWriteAccessD2Ev
        virtual void fwrite(void const*, unsigned long, unsigned long, void *); // _ZN22MemoryMappedFileAccess27MemoryMappedFileWriteAccess6fwriteEPKvmmPv
        MemoryMappedFileWriteAccess(); // _ZN22MemoryMappedFileAccess27MemoryMappedFileWriteAccessC2Ev
    };
    class StreamDetails {

    public:
        StreamDetails(); // _ZN22MemoryMappedFileAccess13StreamDetailsC2Ev
        ~StreamDetails(); // _ZN22MemoryMappedFileAccess13StreamDetailsD2Ev
        StreamDetails(MemoryMappedFileAccess::StreamDetails &&); // _ZN22MemoryMappedFileAccess13StreamDetailsC2EOS0_
    };
};
