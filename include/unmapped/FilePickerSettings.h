#pragma once



class FilePickerSettings {

public:

    FilePickerSettings(void);
    void addFileDescription(std::string const&, std::string const&, bool);
    void getPickerType(void)const;
    void setPickerType(FilePickerSettings::PickerType);
    void getFileDescriptions(void)const;
    void getDefaultFileDescription(void)const;
    void setDefaultFileName(std::string const&);
    void setPickerTitle(std::string);
};
