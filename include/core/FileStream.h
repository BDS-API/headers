#pragma once

#include <istream>


namespace Core {

    class FileStream : std::iostream {

    public:
        ~FileStream();
        void close();
//      void open(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
        FileStream(unsigned long);
        void setLoggingEnabled(bool);
//      FileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
//      FileStream(unsigned long, Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
        FileStream();
        void is_open()const;
    };
}
