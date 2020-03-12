#pragma once

#include "FileStream.h"


namespace Core {

    class InputFileStream : Core::FileStream {

    public:
        ~InputFileStream();
//      void open(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
//      InputFileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
        InputFileStream();
    };
}
