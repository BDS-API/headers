#pragma once

#include <memory>
#include "IFilePicker.h"
#include <vector>
#include <functional>


class SystemFilePicker : IFilePicker, std::enable_shared_from_this<SystemFilePicker> {

public:
    ~SystemFilePicker();
    virtual void initFilePick(Core::Path const&, std::function<void (bool, FileInfo)>);
    virtual void writeBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char> const&);
    virtual void readBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char> &);
    void _fillFileInfo(Core::Path const&);
    SystemFilePicker();
};
