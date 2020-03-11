#pragma once

#include "./FileStream.h"
#include "./Path.h"


namespace Core {

class OutputFileStream : Core::FileStream {

public:
    virtual ~OutputFileStream();

//  void open(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
    OutputFileStream();
//  OutputFileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
};

}