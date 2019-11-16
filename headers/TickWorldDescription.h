#pragma once

class TickWorldDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~TickWorldDescription();
    virtual void ~TickWorldDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}