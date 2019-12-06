#pragma once

class Core::OutputFileStream : Core::FileStream {

public:
    virtual ~OutputFileStream();

    void open(Core::Path const&, std::_Ios_Openmode);
    void OutputFileStream(void);
    void OutputFileStream(Core::Path const&, std::_Ios_Openmode);
};
