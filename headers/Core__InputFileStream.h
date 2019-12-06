#pragma once

class Core::InputFileStream : Core::FileStream {

public:
    virtual ~InputFileStream();

    void InputFileStream(Core::Path const&, std::_Ios_Openmode);
    void InputFileStream(void);
    void open(Core::Path const&, std::_Ios_Openmode);
};
