#pragma once

#include "../core/Path.h"
#include "./SystemFilePicker.h"
#include <memory>
#include "./IFilePicker.h"
#include <vector>
#include <functional>
#include "./FileInfo.h"


class SystemFilePicker : IFilePicker, std::enable_shared_from_this<SystemFilePicker> {

public:
    virtual ~SystemFilePicker();
//  virtual void initFilePick(Core::Path const&, std::function<void (bool, FileInfo)>); //TODO: incomplete function definition
    virtual void readBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> &);
    virtual void writeBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);

    SystemFilePicker();
    void _fillFileInfo(Core::Path const&);
};
