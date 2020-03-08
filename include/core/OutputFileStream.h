#pragma once



using namespace Core;

class OutputFileStream : Core::FileStream {

public:
    virtual Core::OutputFileStream::~OutputFileStream()

    void open(Core::Path const&, std::_Ios_Openmode);
    OutputFileStream(void);
    OutputFileStream(Core::Path const&, std::_Ios_Openmode);
};
