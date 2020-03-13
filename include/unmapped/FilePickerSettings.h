#pragma once

#include <string>


class FilePickerSettings {

public:
    class FileDescription;

    ~FilePickerSettings(); // _ZN18FilePickerSettingsD2Ev
    FilePickerSettings(); // _ZN18FilePickerSettingsC2Ev
    void addFileDescription(std::string const&, std::string const&, bool); // _ZN18FilePickerSettings18addFileDescriptionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_b
    void getPickerType()const; // _ZNK18FilePickerSettings13getPickerTypeEv
//  void setPickerType(FilePickerSettings::PickerType); //TODO: incomplete function definition // _ZN18FilePickerSettings13setPickerTypeENS_10PickerTypeE
    void getFileDescriptions()const; // _ZNK18FilePickerSettings19getFileDescriptionsEv
    void getDefaultFileDescription()const; // _ZNK18FilePickerSettings25getDefaultFileDescriptionEv
    void setDefaultFileName(std::string const&); // _ZN18FilePickerSettings18setDefaultFileNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getDefaultFileName()const; // _ZNK18FilePickerSettings18getDefaultFileNameB5cxx11Ev
    std::string getPickerTitle()const; // _ZNK18FilePickerSettings14getPickerTitleB5cxx11Ev
    void setPickerTitle(std::string); // _ZN18FilePickerSettings14setPickerTitleENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    class FileDescription {

    public:
        ~FileDescription(); // _ZN18FilePickerSettings15FileDescriptionD2Ev
        FileDescription(FilePickerSettings::FileDescription &&); // _ZN18FilePickerSettings15FileDescriptionC2EOS0_
    };
};
