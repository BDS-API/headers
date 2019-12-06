#pragma once

class FileArchiver::Result {

public:

    void Result(FileArchiver::Result const&);
    void Result(FileArchiver::Result&&);
    void Result(void);
};
