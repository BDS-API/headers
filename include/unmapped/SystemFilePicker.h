#pragma once

#include "FileInfo.h"
#include <functional>
#include "../core/Path.h"
#include <vector>
#include <memory>
#include "IFilePicker.h"


class SystemFilePicker : IFilePicker, std::enable_shared_from_this<SystemFilePicker> {

public:
    virtual void writeBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char> const&);
    ~SystemFilePicker();
    virtual void initFilePick(Core::Path const&, std::function<void (bool, FileInfo)>);
    virtual void readBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char> &);
    void _fillFileInfo(Core::Path const&);
    SystemFilePicker();
};
