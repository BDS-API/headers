#pragma once

#include "./FileStream.h"
#include "./Path.h"


namespace Core {

class InputFileStream : Core::FileStream {

public:
    virtual ~InputFileStream();

//  InputFileStream(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
    InputFileStream();
//  void open(Core::Path const&, std::_Ios_Openmode); //TODO: incomplete function definition
};

}