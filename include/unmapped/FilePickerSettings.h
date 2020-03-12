#pragma once

#include <string>


class FilePickerSettings {

public:
    class FileDescription;

    FilePickerSettings();
    std::string getDefaultFileName()const;
    std::string getPickerTitle()const;
    void getDefaultFileDescription()const;
    void addFileDescription(std::string const&, std::string const&, bool);
    void setDefaultFileName(std::string const&);
    void setPickerTitle(std::string);
    void getPickerType()const;
//  void setPickerType(FilePickerSettings::PickerType); //TODO: incomplete function definition
    ~FilePickerSettings();
    void getFileDescriptions()const;
    class FileDescription {

    public:
        FileDescription(FilePickerSettings::FileDescription &&);
        ~FileDescription();
    };
};
