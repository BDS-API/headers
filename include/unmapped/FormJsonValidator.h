#pragma once



namespace FormJsonValidator {

    void getValidator(); // _ZN17FormJsonValidator12getValidatorEv
    void getLabelProperty(); // _ZN17FormJsonValidator16getLabelPropertyEv
    void getToggleProperty(bool); // _ZN17FormJsonValidator17getTogglePropertyEb
    void getSliderProperty(bool); // _ZN17FormJsonValidator17getSliderPropertyEb
    void getStepSliderProperty(bool); // _ZN17FormJsonValidator21getStepSliderPropertyEb
    void getDropdownProperty(bool); // _ZN17FormJsonValidator19getDropdownPropertyEb
    void getTextInputProperty(bool); // _ZN17FormJsonValidator20getTextInputPropertyEb
    void getContentItemProperty(JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&); // _ZN17FormJsonValidator22getContentItemPropertyERKN13JsonValidator8PropertyES3_S3_S3_S3_S3_
    void getControlLockedProperty(); // _ZN17FormJsonValidator24getControlLockedPropertyEv
};
