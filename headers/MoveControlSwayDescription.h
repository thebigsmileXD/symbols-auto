#pragma once

class MoveControlSwayDescription : MoveControlDescription {

    virtual void getJsonName(void)const;
    virtual ~MoveControlSwayDescription();
    virtual ~MoveControlSwayDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
