#pragma once



class FilePickerSettings {

public:

    FilePickerSettings(void);
    void addFileDescription(std::string const&, std::string const&, bool);
    void getPickerType()const;
    void setPickerType(FilePickerSettings::PickerType);
    void getFileDescriptions()const;
    void getDefaultFileDescription()const;
    void setDefaultFileName(std::string const&);
    void setPickerTitle(std::string);
};
