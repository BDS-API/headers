#pragma once

#include <string>


class Description {

public:
    static std::string NAME_TO_ID_MAP;
    static std::string ID_TO_NAME_MAP;

    ~Description(); // _ZN11DescriptionD2Ev
    virtual void deserializeData(Json::Value &); // _ZN11Description15deserializeDataERN4Json5ValueE
    Description(); // _ZN11DescriptionC2Ev
    Description(Description const&); // _ZN11DescriptionC2ERKS_
    void startParsing(Json::Value &, Json::Value &, char const*); // _ZN11Description12startParsingERN4Json5ValueES2_PKc
    void parseDescription(Json::Value &); // _ZN11Description16parseDescriptionERN4Json5ValueE
    void registerAttributes(); // _ZN11Description18registerAttributesEv
    void registerJsonName(std::string const&); // _ZN11Description16registerJsonNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void registerProperties(); // _ZN11Description18registerPropertiesEv
    void registerTriggers(); // _ZN11Description16registerTriggersEv
    void registerComponents(); // _ZN11Description18registerComponentsEv
    std::string getName(int); // _ZN11Description7getNameB5cxx11Ei
    void getId(std::string const&); // _ZN11Description5getIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
