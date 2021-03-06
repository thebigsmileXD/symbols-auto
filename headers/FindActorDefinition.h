#pragma once

class FindActorDefinition : BehaviorDefinition {

    virtual ~FindActorDefinition();
    virtual ~FindActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
