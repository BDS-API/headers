#pragma once

#include <memory>
#include <string>
#include "FileImpl.h"
#include "FileOpenMode.h"


namespace Core {

    class FlatFile : public Core::FileImpl {

    public:
        virtual ~FlatFile(); // _ZN4Core8FlatFileD2Ev
        virtual void __fake_function0(); // fake
        virtual std::string _getPath()const; // _ZNK4Core8FlatFile8_getPathB5cxx11Ev
        virtual void _getBlockSize()const; // _ZNK4Core8FlatFile13_getBlockSizeEv
        virtual void _isOpen(); // _ZN4Core8FlatFile7_isOpenEv
        virtual void _close(); // _ZN4Core8FlatFile6_closeEv
        virtual void _read(void *, unsigned long, unsigned long *); // _ZN4Core8FlatFile5_readEPvmPm
        virtual void _readExactly(void *, unsigned long); // _ZN4Core8FlatFile12_readExactlyEPvm
        virtual void _skip(unsigned long); // _ZN4Core8FlatFile5_skipEm
        virtual void _readAtPosition(unsigned long, void *, unsigned long, unsigned long *); // _ZN4Core8FlatFile15_readAtPositionEmPvmPm
        virtual void _getPosition(unsigned long *); // _ZN4Core8FlatFile12_getPositionEPm
        virtual void _setPosition(unsigned long); // _ZN4Core8FlatFile12_setPositionEm
        virtual void _write(void const*, unsigned long); // _ZN4Core8FlatFile6_writeEPKvm
        virtual void _flush(); // _ZN4Core8FlatFile6_flushEv
        virtual void _getSize(unsigned long *); // _ZN4Core8FlatFile8_getSizeEPm
        virtual void _getRemainingSize(unsigned long *); // _ZN4Core8FlatFile17_getRemainingSizeEPm
        FlatFile(Core::FileSystemImpl *, Core::FileOpenMode, std::unique_ptr<Core::FileImpl>, Core::Path const&, unsigned long, unsigned long); // _ZN4Core8FlatFileC2EPNS_14FileSystemImplENS_12FileOpenModeESt10unique_ptrINS_8FileImplESt14default_deleteIS5_EERKNS_4PathEmm
    };
}
