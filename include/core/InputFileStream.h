#pragma once

#include "FileStream.h"


namespace Core {

    class InputFileStream : Core::FileStream {

    public:
        ~InputFileStream(); // _ZN4Core15InputFileStreamD1Ev
//      InputFileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition // _ZN4Core15InputFileStreamC1ERKNS_4PathESt13_Ios_Openmode
        InputFileStream(); // _ZN4Core15InputFileStreamC1Ev
//      void open(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition // _ZN4Core15InputFileStream4openERKNS_4PathESt13_Ios_Openmode
    };
}
