#pragma once

#include <memory>
#include <string>
#include "FileImpl.h"
#include "FileOpenMode.h"


namespace Core {

    class File_c : public Core::FileImpl {

    public:
        virtual ~File_c(); // _ZN4Core6File_cD2Ev
        virtual void __fake_function0(); // fake
        virtual std::string _getPath()const; // _ZNK4Core6File_c8_getPathB5cxx11Ev
        virtual void _getBlockSize()const; // _ZNK4Core6File_c13_getBlockSizeEv
        virtual void _isOpen(); // _ZN4Core6File_c7_isOpenEv
        virtual void _close(); // _ZN4Core6File_c6_closeEv
        virtual void _read(void *, unsigned long, unsigned long *); // _ZN4Core6File_c5_readEPvmPm
        virtual void _readExactly(void *, unsigned long); // _ZN4Core6File_c12_readExactlyEPvm
        virtual void _skip(unsigned long); // _ZN4Core6File_c5_skipEm
        virtual void _readAtPosition(unsigned long, void *, unsigned long, unsigned long *); // _ZN4Core6File_c15_readAtPositionEmPvmPm
        virtual void _getPosition(unsigned long *); // _ZN4Core6File_c12_getPositionEPm
        virtual void _setPosition(unsigned long); // _ZN4Core6File_c12_setPositionEm
        virtual void _write(void const*, unsigned long); // _ZN4Core6File_c6_writeEPKvm
        virtual void _flush(); // _ZN4Core6File_c6_flushEv
        virtual void _getSize(unsigned long *); // _ZN4Core6File_c8_getSizeEPm
        virtual void _getRemainingSize(unsigned long *); // _ZN4Core6File_c17_getRemainingSizeEPm
//        File_c(long *, Core::FileSystemImpl *, Core::Path const&, Core::FileOpenMode); //TODO: incomplete function definition // _ZN4Core6File_cC2EP8_IO_FILEPNS_14FileSystemImplERKNS_4PathENS_12FileOpenModeE
//        void _open(std::unique_ptr<Core::File_c> &, Core::FileSystemImpl *, Core::Path const&, Core::FileOpenMode, long); //TODO: incomplete function definition // _ZN4Core6File_c5_openERSt10unique_ptrIS0_St14default_deleteIS0_EEPNS_14FileSystemImplERKNS_4PathENS_12FileOpenModeENS_17FileBufferingModeE
    };
}
