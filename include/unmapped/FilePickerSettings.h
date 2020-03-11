#pragma once

#include <string>


class FilePickerSettings {

public:

    ~FilePickerSettings();
    FilePickerSettings();
    void addFileDescription(std::string const&, std::string const&, bool);
    void getPickerType()const;
//  void setPickerType(FilePickerSettings::PickerType); //TODO: incomplete function definition
    void getFileDescriptions()const;
    void getDefaultFileDescription()const;
    void setDefaultFileName(std::string const&);
    std::string getDefaultFileName()const;
    std::string getPickerTitle()const;
    void setPickerTitle(std::string);
};
