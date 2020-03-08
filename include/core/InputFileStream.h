#pragma once



using namespace Core;

class InputFileStream : Core::FileStream {

public:
    virtual Core::InputFileStream::~InputFileStream()

    InputFileStream(Core::Path const&, std::_Ios_Openmode);
    InputFileStream(void);
    void open(Core::Path const&, std::_Ios_Openmode);
};
