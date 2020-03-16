#pragma once

#include <istream>


namespace Core {

    class FileStream : public std::iostream {

    public:
        virtual ~FileStream(); // _ZN4Core10FileStreamD1Ev
        virtual void __fake_function0(); // fake
        void is_open()const; // _ZNK4Core10FileStream7is_openEv
        void close(); // _ZN4Core10FileStream5closeEv
        FileStream(); // _ZN4Core10FileStreamC2Ev
        FileStream(unsigned long); // _ZN4Core10FileStreamC2Em
//        FileStream(Core::Path const&, long); //TODO: incomplete function definition // _ZN4Core10FileStreamC2ERKNS_4PathESt13_Ios_Openmode
//        void open(Core::Path const&, long); //TODO: incomplete function definition // _ZN4Core10FileStream4openERKNS_4PathESt13_Ios_Openmode
//        FileStream(unsigned long, Core::Path const&, long); //TODO: incomplete function definition // _ZN4Core10FileStreamC2EmRKNS_4PathESt13_Ios_Openmode
        void setLoggingEnabled(bool); // _ZN4Core10FileStream17setLoggingEnabledEb
    };
}
