#pragma once

#include "FileStream.h"


namespace Core {

    class OutputFileStream : Core::FileStream {

    public:
        ~OutputFileStream(); // _ZN4Core16OutputFileStreamD1Ev
//      void open(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition // _ZN4Core16OutputFileStream4openERKNS_4PathESt13_Ios_Openmode
        OutputFileStream(); // _ZN4Core16OutputFileStreamC1Ev
//      OutputFileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition // _ZN4Core16OutputFileStreamC1ERKNS_4PathESt13_Ios_Openmode
    };
}
