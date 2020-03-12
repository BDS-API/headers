#pragma once

#include <string>


class FilePickerSettings {

public:
    class FileDescription;

    ~FilePickerSettings();
    void setDefaultFileName(std::string const&);
    void getPickerType()const;
    void getDefaultFileDescription()const;
    void setPickerTitle(std::string);
    std::string getDefaultFileName()const;
    void addFileDescription(std::string const&, std::string const&, bool);
    void getFileDescriptions()const;
    std::string getPickerTitle()const;
//  void setPickerType(FilePickerSettings::PickerType); //TODO: incomplete function definition
    FilePickerSettings();
    class FileDescription {

    public:
        FileDescription(FilePickerSettings::FileDescription &&);
        ~FileDescription();
    };
};
