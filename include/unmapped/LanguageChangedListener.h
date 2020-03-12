#pragma once



namespace I18n {

    class LanguageChangedListener {

    public:
        ~LanguageChangedListener();
        LanguageChangedListener(I18n::LanguageChangedListener &&);
    };
}
