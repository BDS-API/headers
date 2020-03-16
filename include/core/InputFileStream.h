#pragma once

#include "FileStream.h"


namespace Core {

    class InputFileStream : public Core::FileStream {

    public:
        virtual ~InputFileStream(); // _ZN4Core15InputFileStreamD1Ev
        virtual void __fake_function0(); // fake
//        InputFileStream(Core::Path const&, long); //TODO: incomplete function definition // _ZN4Core15InputFileStreamC1ERKNS_4PathESt13_Ios_Openmode
        InputFileStream(); // _ZN4Core15InputFileStreamC1Ev
//        void open(Core::Path const&, long); //TODO: incomplete function definition // _ZN4Core15InputFileStream4openERKNS_4PathESt13_Ios_Openmode
    };
}
