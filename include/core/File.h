#pragma once

#include <memory>
#include "Path.h"
#include <vector>
#include "FileOpenMode.h"


namespace Core {

    class File {

    public:
        File(); // _ZN4Core4FileC2Ev
        void write(void const*, unsigned long); // _ZN4Core4File5writeEPKvm
        ~File(); // _ZN4Core4FileD2Ev
        bool isOpen()const; // _ZNK4Core4File6isOpenEv
        File(Core::File &&); // _ZN4Core4FileC2EOS0_
        void readAtPosition(unsigned long, void *, unsigned long, unsigned long *); // _ZN4Core4File14readAtPositionEmPvmPm
        void read(void *, unsigned long, unsigned long *); // _ZN4Core4File4readEPvmPm
        void skip(unsigned long); // _ZN4Core4File4skipEm
        void flush(); // _ZN4Core4File5flushEv
        void getSize(unsigned long *); // _ZN4Core4File7getSizeEPm
        void readExactly(void *, unsigned long); // _ZN4Core4File11readExactlyEPvm
        void getRemainingSize(unsigned long *); // _ZN4Core4File16getRemainingSizeEPm
        void getPosition(unsigned long *); // _ZN4Core4File11getPositionEPm
        void setPosition(unsigned long); // _ZN4Core4File11setPositionEm
//      void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition // _ZN4Core4File4openENS_4PathENS_12FileOpenModeENS_17FileBufferingModeE
        void setLoggingEnabled(bool); // _ZN4Core4File17setLoggingEnabledEb
        void close(); // _ZN4Core4File5closeEv
        bool isNearTransactionLimit(unsigned long)const; // _ZNK4Core4File22isNearTransactionLimitEm
        void cleanPath(Core::Path); // _ZN4Core4File9cleanPathENS_4PathE
        void cleanPathSeparators(Core::Path); // _ZN4Core4File19cleanPathSeparatorsENS_4PathE
        void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, std::vector<unsigned char> const&); // _ZN4Core4File27writeCreateOrAppendFileDataENS_4PathEmmRKSt6vectorIhSaIhEE
        void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, unsigned char const*); // _ZN4Core4File27writeCreateOrAppendFileDataENS_4PathEmmPKh
        void getBlockSize()const; // _ZNK4Core4File12getBlockSizeEv
        File(std::unique_ptr<Core::FileImpl> &&, std::unique_ptr<Core::FileSystemImpl> &&); // _ZN4Core4FileC2EOSt10unique_ptrINS_8FileImplESt14default_deleteIS2_EEOS1_INS_14FileSystemImplES3_IS7_EE
    };
}
