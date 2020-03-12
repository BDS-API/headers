#pragma once

#include "FileStream.h"


namespace Core {

    class OutputFileStream : Core::FileStream {

    public:
        ~OutputFileStream();
//      OutputFileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
//      void open(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
        OutputFileStream();
    };
}
