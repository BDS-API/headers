#pragma once



class FormJsonValidator {

public:

    void getValidator();
    void getLabelProperty();
    void getToggleProperty(bool);
    void getSliderProperty(bool);
    void getStepSliderProperty(bool);
    void getDropdownProperty(bool);
    void getTextInputProperty(bool);
    void getContentItemProperty(JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&);
    void getControlLockedProperty();
};
