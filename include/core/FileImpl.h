#pragma once

#include <string>
#include "FileOpenMode.h"


namespace Core {

    class FileImpl {

    public:
        ~FileImpl(); // _ZN4Core8FileImplD2Ev
        void getNumFiles(); // _ZN4Core8FileImpl11getNumFilesEv
        FileImpl(Core::FileSystemImpl *, Core::FileOpenMode); // _ZN4Core8FileImplC2EPNS_14FileSystemImplENS_12FileOpenModeE
        void setLoggingEnabled(bool); // _ZN4Core8FileImpl17setLoggingEnabledEb
        void getLoggingEnabled()const; // _ZNK4Core8FileImpl17getLoggingEnabledEv
        void getTransaction(); // _ZN4Core8FileImpl14getTransactionEv
        std::string getPath()const; // _ZNK4Core8FileImpl7getPathB5cxx11Ev
        void getBlockSize()const; // _ZNK4Core8FileImpl12getBlockSizeEv
        bool isOpen(); // _ZN4Core8FileImpl6isOpenEv
        void getOpenMode()const; // _ZNK4Core8FileImpl11getOpenModeEv
        void close(); // _ZN4Core8FileImpl5closeEv
        void read(void *, unsigned long, unsigned long *); // _ZN4Core8FileImpl4readEPvmPm
        void _readOperation(Core::Result &&, unsigned long); // _ZN4Core8FileImpl14_readOperationEONS_6ResultEm
        void readExactly(void *, unsigned long); // _ZN4Core8FileImpl11readExactlyEPvm
        void skip(unsigned long); // _ZN4Core8FileImpl4skipEm
        void readAtPosition(unsigned long, void *, unsigned long, unsigned long *); // _ZN4Core8FileImpl14readAtPositionEmPvmPm
        void getPosition(unsigned long *); // _ZN4Core8FileImpl11getPositionEPm
        void setPosition(unsigned long); // _ZN4Core8FileImpl11setPositionEm
        void write(void const*, unsigned long); // _ZN4Core8FileImpl5writeEPKvm
        void _writeOperation(Core::Result &&, unsigned long); // _ZN4Core8FileImpl15_writeOperationEONS_6ResultEm
        void flush(); // _ZN4Core8FileImpl5flushEv
        void getSize(unsigned long *); // _ZN4Core8FileImpl7getSizeEPm
        void getRemainingSize(unsigned long *); // _ZN4Core8FileImpl16getRemainingSizeEPm
        void notifyChangeInFileSize(long, long); // _ZN4Core8FileImpl22notifyChangeInFileSizeEll
    };
}
