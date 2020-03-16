#pragma once

#include <memory>
#include <functional>
#include "IFilePicker.h"
#include <vector>


class SystemFilePicker : public IFilePicker, public std::enable_shared_from_this<SystemFilePicker> {

public:
    virtual ~SystemFilePicker(); // _ZN16SystemFilePickerD2Ev
    virtual void __fake_function0(); // fake
    virtual void initFilePick(Core::Path const&, std::function<void (bool, FileInfo)>); // _ZN16SystemFilePicker12initFilePickERKN4Core4PathESt8functionIFvb8FileInfoEE
    virtual void readBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char> &); // _ZN16SystemFilePicker9readBytesERK8FileInfommRSt6vectorIhSaIhEE
    virtual void writeBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char> const&); // _ZN16SystemFilePicker10writeBytesERK8FileInfommRKSt6vectorIhSaIhEE
    SystemFilePicker(); // _ZN16SystemFilePickerC2Ev
    void _fillFileInfo(Core::Path const&); // _ZN16SystemFilePicker13_fillFileInfoERKN4Core4PathE
};
