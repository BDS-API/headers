#pragma once

#include "FileStream.h"


namespace Core {

    class OutputFileStream : public Core::FileStream {

    public:
        virtual ~OutputFileStream(); // _ZN4Core16OutputFileStreamD1Ev
        virtual void __fake_function0(); // fake
//        void open(Core::Path const&, long); //TODO: incomplete function definition // _ZN4Core16OutputFileStream4openERKNS_4PathESt13_Ios_Openmode
        OutputFileStream(); // _ZN4Core16OutputFileStreamC1Ev
//        OutputFileStream(Core::Path const&, long); //TODO: incomplete function definition // _ZN4Core16OutputFileStreamC1ERKNS_4PathESt13_Ios_Openmode
    };
}
