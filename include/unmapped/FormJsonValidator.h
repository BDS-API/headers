#pragma once

#include "Property.h"


namespace FormJsonValidator {

    void getValidator();
    void getContentItemProperty(JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&, JsonValidator::Property const&);
    void getLabelProperty();
    void getDropdownProperty(bool);
    void getStepSliderProperty(bool);
    void getSliderProperty(bool);
    void getToggleProperty(bool);
    void getTextInputProperty(bool);
    void getControlLockedProperty();
};
