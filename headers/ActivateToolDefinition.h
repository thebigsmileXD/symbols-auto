#pragma once

class ActivateToolDefinition : BehaviorDefinition {

    virtual ~ActivateToolDefinition();
    virtual ~ActivateToolDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
