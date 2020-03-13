#pragma once

#include <string>


class FeedItem {

public:
    class Effect;

    ~FeedItem(); // _ZN8FeedItemD2Ev
    void setItem(std::string const&); // _ZN8FeedItem7setItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addEffect(FeedItem::Effect const&); // _ZN8FeedItem9addEffectERKNS_6EffectE
    FeedItem(); // _ZN8FeedItemC2Ev
    FeedItem(FeedItem const&); // _ZN8FeedItemC2ERKS_
    FeedItem(FeedItem &&); // _ZN8FeedItemC2EOS_
    class Effect {

    public:
        ~Effect(); // _ZN8FeedItem6EffectD2Ev
        Effect(FeedItem::Effect const&); // _ZN8FeedItem6EffectC2ERKS0_
        Effect(FeedItem::Effect &&); // _ZN8FeedItem6EffectC2EOS0_
        Effect(); // _ZN8FeedItem6EffectC2Ev
    };
};
