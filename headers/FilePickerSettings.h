#pragma once

class FilePickerSettings {

public:

    void FilePickerSettings(void);
    void addFileDescription(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void getPickerType(void)const;
    void setPickerType(FilePickerSettings::PickerType);
    void getFileDescriptions(void)const;
    void getDefaultFileDescription(void)const;
    void setDefaultFileName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setPickerTitle(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
