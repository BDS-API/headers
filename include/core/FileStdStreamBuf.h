#pragma once

#include <streambuf>
#include <ios>
#include "FileOpenMode.h"


namespace Core {

    class FileStdStreamBuf : std::basic_streambuf<char, std::char_traits<char>> {

    public:
        ~FileStdStreamBuf(); // _ZN4Core16FileStdStreamBufD2Ev
        void close(); // _ZN4Core16FileStdStreamBuf5closeEv
        FileStdStreamBuf(unsigned long); // _ZN4Core16FileStdStreamBufC2Em
        void _Init(); // _ZN4Core16FileStdStreamBuf5_InitEv
        void open(Core::File &&, Core::FileOpenMode); // _ZN4Core16FileStdStreamBuf4openEONS_4FileENS_12FileOpenModeE
        bool isOpen()const; // _ZNK4Core16FileStdStreamBuf6isOpenEv
        void sync(); // _ZN4Core16FileStdStreamBuf4syncEv
        void underflow(); // _ZN4Core16FileStdStreamBuf9underflowEv
        void overflow(int); // _ZN4Core16FileStdStreamBuf8overflowEi
        void _flushoutput(); // _ZN4Core16FileStdStreamBuf12_flushoutputEv
//      void seekoff(long, std::_Ios_Seekdir, std::_Ios_Openmode); //TODO: incomplete function definition // _ZN4Core16FileStdStreamBuf7seekoffElSt12_Ios_SeekdirSt13_Ios_Openmode
//      void seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode); //TODO: incomplete function definition // _ZN4Core16FileStdStreamBuf7seekposESt4fposI11__mbstate_tESt13_Ios_Openmode
    };
}
