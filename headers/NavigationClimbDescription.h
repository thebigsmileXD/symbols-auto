#pragma once

class NavigationClimbDescription : NavigationDescription {

    virtual void getJsonName(void)const;
    virtual void ~NavigationClimbDescription();
    virtual void ~NavigationClimbDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}