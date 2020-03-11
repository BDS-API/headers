#pragma once

#include "./LanguageChangedListener.h"


namespace I18n {

class LanguageChangedListener {

public:

    ~LanguageChangedListener();
    LanguageChangedListener(I18n::LanguageChangedListener &&);
};

}