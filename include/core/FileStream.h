#pragma once

#include <istream>
#include "Path.h"


namespace Core {

    class FileStream : std::iostream {

    public:
        ~FileStream();
        FileStream();
        void close();
//      FileStream(unsigned long, Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
        FileStream(unsigned long);
//      void open(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
        void is_open()const;
        void setLoggingEnabled(bool);
//      FileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
    };
}
