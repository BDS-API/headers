#pragma once

class SystemFilePicker : IFilePicker, std::enable_shared_from_this_ltSystemFilePicker_ge {

    virtual ~SystemFilePicker();
    virtual ~SystemFilePicker();
    virtual void initFilePick(Core::Path const&, std::function<void ()(bool, FileInfo)>);
    virtual void readBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> &);
    virtual void writeBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
}
